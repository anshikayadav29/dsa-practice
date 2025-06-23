#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1;  // first two terms
    cout << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        int c = a + b;  // next term
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}