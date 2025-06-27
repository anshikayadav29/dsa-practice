#include <iostream>
using namespace std;

class Test {};

void print(Test t) {
    cout << "Called with object of class Test" << endl;
}

void print(int a) {
    cout << "Integer value: " << a << endl;
}

int main() {
    Test obj;
    print(obj);
    print(10);
    return 0;
}