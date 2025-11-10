#include <bits/stdc++.h>
using namespace std;
struct DSURollback {
    int n;
    vector<int> parent, sz;
    vector<pair<int,int>> ops; // store changes: (v, previous_parent), negative v means size change encoded
    DSURollback(int n=0): n(n), parent(n+1), sz(n+1,1) {
        for (int i=1;i<=n;i++) parent[i]=i;
    }
    int find(int x){
        while(parent[x]!=x) x=parent[x];
        return x;
    }
    bool unite(int a, int b){
        a = find(a); b = find(b);
        if (a==b) return false;
        if (sz[a] < sz[b]) swap(a,b);
        // attach b -> a
        ops.emplace_back(b, parent[b]); // store previous parent of b
        parent[b] = a;
        ops.emplace_back(-a, sz[a]); // store size change for a (neg key)
        sz[a] += sz[b];
        return true;
    }
    int snapshot(){ return (int)ops.size(); }
    void rollback(int snap){
        while((int)ops.size() > snap){
            auto pr = ops.back(); ops.pop_back();
            if (pr.first < 0){
                int a = -pr.first;
                int prev_sz = pr.second;
                sz[a] = prev_sz;
            } else {
                int v = pr.first;
                int prev_parent = pr.second;
                parent[v] = prev_parent;
            }
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    if(!(cin >> N >> M)) return 0;
    // store operations
    struct Op { char type; int u, v; };
    vector<Op> ops(M+1);
    // Normalize edges so u < v for map keys
    auto norm = [&](int a,int b){ if (a>b) swap(a,b); return make_pair(a,b); };
    // map edge -> last insertion time
    unordered_map<long long, int> lastAdd; lastAdd.reserve(M*2);
    vector<pair<int,int>> edgeIntervals; // later not used directly
    // We'll store intervals in a segment tree structure:
    // seg[node] contains vector of edges active on that segment
    vector<vector<pair<int,int>>> seg(4*(M+5));
    vector<pair<int,int>> queries(M+1, {0,0}); // for '?' store (x,y), else (0,0)
    // read ops
    for (int i=1;i<=M;i++){
        char c; cin >> c;
        if (c == '+' || c == '-'){
            int u,v; cin >> u >> v;
            ops[i] = {c,u,v};
        } else if (c == '?'){
            int x,y; cin >> x >> y;
            ops[i] = {c,x,y};
            queries[i] = {x,y};
        } else {
            // ignore
        }
    }
    // helper to make a key for unordered_map from edge pair
    auto key = [&](int a,int b)->long long{
        if (a>b) swap(a,b);
        return ( (long long)a << 32 ) ^ (long long)b;
    };
    // pair adds and removes
    for (int i=1;i<=M;i++){
        if (ops[i].type == '+'){
            long long k = key(ops[i].u, ops[i].v);
            lastAdd[k] = i; // record start time
        } else if (ops[i].type == '-'){
            long long k = key(ops[i].u, ops[i].v);
            auto it = lastAdd.find(k);
            if (it == lastAdd.end()){
                // edge removed without prior add — ignore or treat as add at time 1; here we skip
                continue;
            } else {
                int l = it->second;
                int r = i-1;
                // add interval [l, r] to segtree
                // function to insert
                function<void(int,int,int,int,int, pair<int,int>)> insertSeg;
                insertSeg = [&](int node,int nl,int nr,int ql,int qr, pair<int,int> e){
                    if (qr < nl || nr < ql) return;
                    if (ql <= nl && nr <= qr){
                        seg[node].push_back(e);
                        return;
                    }
                    int mid=(nl+nr)/2;
                    insertSeg(node*2, nl, mid, ql, qr, e);
                    insertSeg(node*2+1, mid+1, nr, ql, qr, e);
                };
                insertSeg(1,1,M,l,r, {ops[i].u, ops[i].v});
                lastAdd.erase(it);
            }
        }
    }
    // any remaining adds last until M
    function<void(int,int,int,int,int,pair<int,int>)> insertSegFinal;
    insertSegFinal = [&](int node,int nl,int nr,int ql,int qr, pair<int,int> e){
        if (qr < nl || nr < ql) return;
        if (ql <= nl && nr <= qr){
            seg[node].push_back(e);
            return;
        }
        int mid=(nl+nr)/2;
        insertSegFinal(node*2, nl, mid, ql, qr, e);
        insertSegFinal(node*2+1, mid+1, nr, ql, qr, e);
    };
    for (auto &it : lastAdd){
        long long keyll = it.first;
        int l = it.second;
        int r = M;
        // decode key into u,v
        int u = (int)(keyll >> 32);
        int v = (int)(keyll & 0xffffffff);
        insertSegFinal(1,1,M,l,r, {u,v});
    }

    // answers
    vector<string> ans(M+1);
    DSURollback dsu(N);
    // traverse segtree
    function<void(int,int,int)> dfs = [&](int node,int nl,int nr){
        int snap = dsu.snapshot();
        // apply edges of this segment
        for (auto &e : seg[node]){
            dsu.unite(e.first, e.second);
        }
        if (nl == nr){
            if (ops[nl].type == '?'){
                auto q = queries[nl];
                ans[nl] = (dsu.find(q.first) == dsu.find(q.second)) ? "YES" : "NO";
            }
        } else {
            int mid = (nl+nr)/2;
            dfs(node*2, nl, mid);
            dfs(node*2+1, mid+1, nr);
        }
        dsu.rollback(snap);
    };
    dfs(1,1,M);
    // output answers in order
    for (int i=1;i<=M;i++){
        if (ops[i].type == '?') cout << ans[i] << '\n';
    }
    return 0;
}
