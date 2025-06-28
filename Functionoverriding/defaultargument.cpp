#include <iostream>
using namespace std;

void print(int a, int b = 0) {
    cout << "a: " << a << ", b: " << b << endl;
}

void print(float x) {
    cout << "Float: " << x << endl;
}

int main() {
    print(5);
    print(3, 4);
    print(4.2f);
    return 0;
}