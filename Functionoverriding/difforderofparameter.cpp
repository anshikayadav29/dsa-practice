#include <iostream>
using namespace std;

void calc(int a, double b) {
    cout << "Sum: " << a + b << endl;
}

void calc(double b, int a) {
    cout << "Product: " << a * b << endl;
}

int main() {
    calc(2, 3.5);
    calc(3.5, 2);
    return 0;
}