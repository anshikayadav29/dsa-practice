#include <iostream>
using namespace std;

class Parent {
public:
    virtual void print() {
        cout << "Parent print()\n";
    }
    virtual void info() {
        cout << "Parent info()\n";
    }
};

class Child : public Parent {
public:
    void print() override {
        cout << "Child print()\n";
    }
    void info() override {
        cout << "Child info()\n";
    }
};

int main() {
    Parent* p = new Child();
    p->print();
    p->info();
    delete p;
    return 0;
}