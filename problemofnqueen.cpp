#include <bits/stdc++.h>
using namespace std;

class NQueens {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));
        vector<int> leftRow(n, 0), lowerDiagonal(2*n-1, 0), upperDiagonal(2*n-1, 0);
        solve(0, board, solutions, leftRow, lowerDiagonal, upperDiagonal, n);
        return solutions;
    }

private:
    void solve(int col, vector<string> &board, vector<vector<string>> &solutions,
               vector<int> &leftRow, vector<int> &lowerDiagonal, vector<int> &upperDiagonal, int n) {
        if (col == n) {
            solutions.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;

                solve(col + 1, board, solutions, leftRow, lowerDiagonal, upperDiagonal, n);

                // backtrack
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter number of queens: ";
    cin >> n;

    NQueens nq;
    vector<vector<string>> solutions = nq.solveNQueens(n);

    cout << "Total Solutions: " << solutions.size() << "\n\n";
    for (int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i+1 << ":\n";
        for (auto row : solutions[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }
    return 0;
}
