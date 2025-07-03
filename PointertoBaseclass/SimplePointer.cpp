#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show\n";
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->display(); 

    return 0;
}