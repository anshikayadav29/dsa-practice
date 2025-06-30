#include<iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Class A\n";
    }
};

class B : public A {
public:
    void display() override {
        cout << "Class B\n";
    }
};

class C : public B {
public:
    void display() override {
        cout << "Class C\n";
    }
};

int main() {
    A* a;
    C c;
    a = &c;
    a->display();
    return 0;
}