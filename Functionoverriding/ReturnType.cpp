#include <iostream>
using namespace std;

class Base {
public:
    virtual int getValue() {
        return 10;
    }
};

class Derived : public Base {
public:
    int getValue() override {
        return 20;
    }
};

int main() {
    Base* b = new Derived();
    cout << b->getValue() << endl;
    delete b;
    return 0;
}