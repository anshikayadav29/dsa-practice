#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(const vector<long long>& a) {
    long long best = LLONG_MIN, cur = 0;
    for (long long x : a) {
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; 
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    cout << maxSubarraySum(a) << "\n";
    return 0;
}
