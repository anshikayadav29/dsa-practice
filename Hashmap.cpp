#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    unordered_map<int,int> freq;
    freq[0] = 1;  // base case
    long long sum = 0, ans = 0;

    for (int x : a) {
        sum += x;
        if (freq.count(sum - k)) ans += freq[sum - k];
        freq[sum]++;
    }
    cout << ans;
}
