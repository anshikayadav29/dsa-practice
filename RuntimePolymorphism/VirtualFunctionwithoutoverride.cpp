#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
    
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
    return 0;
}