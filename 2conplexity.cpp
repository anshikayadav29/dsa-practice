#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int N, K;
vector<vector<int>> g;
vector<int> sub, seen;
ll answer = 0;

void dfs_size(int u, int p) {
    sub[u] = 1;
    for (int v : g[u]) if (v != p && !seen[v]) {
        dfs_size(v, u);
        sub[u] += sub[v];
    }
}

int find_centroid(int u, int p, int total) {
    for (int v : g[u]) if (v != p && !seen[v]) {
        if (sub[v] > total/2) return find_centroid(v, u, total);
    }
    return u;
}

void collect_dist(int u, int p, int depth, vector<int> &vec) {
    if (depth > K) return; // prune: distances > K are useless
    vec.push_back(depth);
    for (int v : g[u]) if (v != p && !seen[v]) {
        collect_dist(v, u, depth+1, vec);
    }
}

void decompose(int entry) {
    dfs_size(entry, -1);
    int c = find_centroid(entry, -1, sub[entry]);
    seen[c] = 1;

    // freq[d] = number of nodes at distance d from centroid across processed subtrees
    // use vector sized K+1 for O(1) access (pruned by depth > K)
    vector<int> freq(K+1, 0);
    freq[0] = 1; // centroid itself

    for (int v : g[c]) if (!seen[v]) {
        vector<int> dist;
        collect_dist(v, c, 1, dist);
        // count pairs between current subtree and previously processed nodes
        for (int d : dist) {
            if (d <= K) answer += freq[K - d];
        }
        // merge current subtree distances into freq
        for (int d : dist) if (d <= K) freq[d]++;
    }

    // recurse on children components
    for (int v : g[c]) if (!seen[v]) decompose(v);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (!(cin >> N >> K)) return 0;
    g.assign(N+1, {});
    for (int i = 0; i < N-1; ++i) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    sub.assign(N+1, 0);
    seen.assign(N+1, 0);
    answer = 0;
    decompose(1);
    cout << answer << "\n";
    return 0;
}
