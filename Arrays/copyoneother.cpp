#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int b[5];

    for (int i = 0; i < 5; i++) b[i] = a[i];

    cout << "Copied array: ";
    for (int i = 0; i < 5; i++) cout << b[i] << " ";
    return 0;
}