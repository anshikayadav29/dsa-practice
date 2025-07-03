#include <iostream>
using namespace std;

class Base {
public:
    virtual void msg() {
        cout << "Base message\n";
    }
};

class Derived : public Base {
public:
    void msg(string name) { 
        cout << "Hello " << name << endl;
    }
};
int main() {
    Base* b = new Derived();
    b->msg(); 
    delete b;
    return 0;
}