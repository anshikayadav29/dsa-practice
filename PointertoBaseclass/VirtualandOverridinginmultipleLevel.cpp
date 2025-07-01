#include <iostream>
using namespace std;

class A {
public:
    virtual void speak() {
        cout << "A speaking\n";
    }
};

class B : public A {
public:
    void speak() override {
        cout << "B speaking\n";
    }
};

class C : public B {
public:
    void speak() override {
        cout << "C speaking\n";
    }
};

int main() {
    A *ptr;
    C obj;
    ptr = &obj;
    ptr->speak(); 

    return 0;
}