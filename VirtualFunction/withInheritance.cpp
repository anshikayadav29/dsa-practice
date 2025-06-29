#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void show() override {
        cout << "Class B\n";
    }
};

class C : public B {
public:
    void show() override {
        cout << "Class C\n";
    }
};

int main() {
    A* a = new C();
    a->show(); 
    delete a;
    return 0;
}