#include <iostream>
using namespace std;

class A {
public:
    void print() {
        cout << "Class A function\n";
    }
};

class B : public A {
public:
    void printB() {
        cout << "Class B function\n";
    }
};

int main() {
    A *p;
    B obj;
    p = &obj;
    p->print();  
    

    return 0;
}