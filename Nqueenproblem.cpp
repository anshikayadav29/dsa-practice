#include <bits/stdc++.h>
using namespace std;

class NQueens {
    int N;
    vector<vector<string>> solutions;

    bool isSafe(vector<string>& board, int row, int col) {
        // Check column
        for (int i = 0; i < row; i++)
            if (board[i][col] == 'Q') return false;

        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q') return false;

        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
            if (board[i][j] == 'Q') return false;

        return true;
    }

    void solve(vector<string>& board, int row) {
        if (row == N) {
            solutions.push_back(board);
            return;
        }
        for (int col = 0; col < N; col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q';       // place queen
                solve(board, row + 1);       // recurse
                board[row][col] = '.';       // backtrack
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        N = n;
        vector<string> board(N, string(N, '.'));
        solve(board, 0);
        return solutions;
    }
};

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    NQueens solver;
    auto result = solver.solveNQueens(n);

    cout << "Total Solutions: " << result.size() << "\n\n";
    for (auto& board : result) {
        for (auto& row : board)
            cout << row << "\n";
        cout << "\n";
    }
}
