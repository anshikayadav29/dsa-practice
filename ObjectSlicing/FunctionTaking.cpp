#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
    void print() {
        cout << "Base: " << x << endl;
    }
};

class Derived : public Base {
public:
    int y = 20;
    void print() {
        cout << "Derived: " << x << " " << y << endl;
    }
};

void display(Base b) {
    b.print();
}

int main() {
    Derived d;
    display(d);
    return 0;
}