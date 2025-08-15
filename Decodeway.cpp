#include <bits/stdc++.h>
using namespace std;
int f(string &s, int i, vector<int> &dp) {
    if (i == s.size()) return 1;
    if (s[i] == '0') return 0;
    if (dp[i] != -1) return dp[i];
    int ways = f(s, i + 1, dp);
    if (i + 1 < s.size() && stoi(s.substr(i, 2)) <= 26) ways += f(s, i + 2, dp);
    return dp[i] = ways;
}
int main() {
    string s; cin >> s;
    vector<int> dp(s.size(), -1);
    cout << f(s, 0, dp);
}