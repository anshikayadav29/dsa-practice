#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input: 7

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << "  "; // Two spaces for alignment
        }

        // Print numbers
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}