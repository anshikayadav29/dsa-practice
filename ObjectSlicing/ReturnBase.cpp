#include <iostream>
using namespace std;

class Base {
public:
    int x = 100;
    void print() {
        cout << "Base: " << x << endl;
    }
};

class Derived : public Base {
public:
    int y = 200;
    void print() {
        cout << "Derived: " << x << " " << y << endl;
    }
};

Base get() {
    Derived d;
    return d;
}

int main() {
    Base b = get();
    b.print();
    return 0;
}