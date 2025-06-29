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

void display(A& obj) {
    obj.show();  
}

int main() {
    B b;
    display(b);  
    return 0;
}