#include <bits/stdc++.h>
using namespace std;

int minimumEffortPath(vector<vector<int>>& heights) {
    int n = heights.size(), m = heights[0].size();
    vector<vector<int>> dist(n, vector<int>(m, 1e9));
    priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;

    pq.push({0, 0, 0}); // effort, x, y
    dist[0][0] = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while (!pq.empty()) {
        auto t = pq.top();
        pq.pop();
        int effort = t[0], x = t[1], y = t[2];

        if (x == n - 1 && y == m - 1) return effort;
        for (int k = 0; k < 4; ++k) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                int newEffort = max(effort, abs(heights[x][y] - heights[nx][ny]));
                if (newEffort < dist[nx][ny]) {
                    dist[nx][ny] = newEffort;
                    pq.push({newEffort, nx, ny});
                }
            }
        }
    }
    return 0;
}

int main() {
    vector<vector<int>> heights = {
        {1, 2, 2},
        {3, 8, 2},
        {5, 3, 5}
    };
    cout << "Minimum Effort Path: " << minimumEffortPath(heights);
    return 0;
}
