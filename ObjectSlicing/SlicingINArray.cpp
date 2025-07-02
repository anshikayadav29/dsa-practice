#include <iostream>
using namespace std;

class Base {
public:
    int a = 5;
};

class Derived : public Base {
public:
    int b = 10;
};

int main() {
    Derived d;
    Base arr[1];
    arr[0] = d;
    cout << arr[0].a << endl;
    return 0;
}