#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "Base print()\n";
    }
};

class Derived : public Base {};

int main() {
    Derived d;
    Base* ptr = &d;
    ptr->print(); 
    return 0;
}