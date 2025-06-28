#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base display()\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived display()\n";
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->display();  
    return 0;
}