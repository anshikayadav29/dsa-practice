#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()\n";
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}