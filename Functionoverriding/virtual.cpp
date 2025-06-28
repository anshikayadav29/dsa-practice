#include <iostream>
using namespace std;

class Base {
public:
    virtual void greet() {
        cout << "Hello from Base\n";
    }
};

class Derived : public Base {
public:
    void greet() override {
        cout << "Hello from Derived\n";
    }
};

int main() {
    Base* b = new Derived();
    b->greet();  
    delete b;
    return 0;
}