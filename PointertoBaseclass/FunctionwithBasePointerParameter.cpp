#include <iostream>
using namespace std;

class Base {
public:
    virtual void talk() {
        cout << "Talking from Base\n";
    }
};

class Derived : public Base {
public:
    void talk() override {
        cout << "Talking from Derived\n";
    }
};

void call(Base *b) {
    b->talk();
}

int main() {
    Derived d;
    call(&d);

    return 0;
}