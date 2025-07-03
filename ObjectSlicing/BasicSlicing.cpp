#include <iostream>
using namespace std;

class Base {
public:
    int x = 1;
    void show() {
        cout << "Base: " << x << endl;
    }
};

class Derived : public Base {
public:
    int y = 2;
    void show() {
        cout << "Derived: " << x << " " << y << endl;
    }
};

int main() {
    Derived d;
    Base b = d;
    b.show();
    return 0;
}