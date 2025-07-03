#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {
        cout << "A destroyed\n";
    }
};

class B : public A {
public:
    ~B() {
        cout << "B destroyed\n";
    }
};

int main() {
    A* obj = new B();
    delete obj;
    return 0;
}