#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    int c[6];

    for (int i = 0; i < 3; i++) c[i] = a[i];
    for (int i = 0; i < 3; i++) c[i + 3] = b[i];

    cout << "Merged: ";
    for (int i = 0; i < 6; i++) cout << c[i] << " ";
    return 0;
}