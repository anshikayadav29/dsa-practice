#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void fun() {
        cout << "Derived\n";
    }
};

int main() {
    Derived d;
    Base b = d;
    b.fun();
    return 0;
}