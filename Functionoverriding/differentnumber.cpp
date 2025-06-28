#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum (2 args): " << a + b << endl;
}

void add(int a, int b, int c) {
    cout << "Sum (3 args): " << a + b + c << endl;
}

int main() {
    add(3, 4);
    add(1, 2, 3);
    return 0;
}