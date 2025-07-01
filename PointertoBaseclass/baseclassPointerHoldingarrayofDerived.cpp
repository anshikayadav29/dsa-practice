#include <iostream>
using namespace std;

class Base {
public:
    virtual void say() {
        cout << "Base\n";
    }
};

class Derived1 : public Base {
public:
    void say() override {
        cout << "Derived1\n";
    }
};

class Derived2 : public Base {
public:
    void say() override {
        cout << "Derived2\n";
    }
};

int main() {
    Base *arr[2];
    Derived1 d1;
    Derived2 d2;

    arr[0] = &d1;
    arr[1] = &d2;

    arr[0]->say(); 
    arr[1]->say(); 

    return 0;
}