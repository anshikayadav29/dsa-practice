#include <iostream>
using namespace std;

void show(int a) {
    cout << "Int: " << a << endl;
}

void show(float b) {
    cout << "Float: " << b << endl;
}

int main() {
    show(10);
    show(10.5f);
    return 0;
}