#include <iostream>
using namespace std;

class Base {
public:
    int a = 3;
    void print() {
        cout << "Base a = " << a << endl;
    }
};

class Derived : public Base {
public:
    int b = 6;
    void print() {
        cout << "Derived b = " << b << endl;
    }
};

void func(Base obj) {
    obj.print();
}

int main() {
    Derived d;
    func(d);
    return 0;
}