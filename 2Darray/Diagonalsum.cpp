#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{1, 0, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < 3; i++)
        sum += a[i][i];  // only main diagonal

    cout << "Main Diagonal Sum: " << sum;
    return 0;
}