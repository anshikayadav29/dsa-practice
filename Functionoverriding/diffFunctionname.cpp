#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    cout << "Swapping by Value: a = " << a << ", b = " << b << endl;
}

void swapByReference(int& a, int& b) {
    cout << "Swapping by Reference" << endl;
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapByReference(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    return 0;
}