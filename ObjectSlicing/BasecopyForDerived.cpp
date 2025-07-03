#include <iostream>
using namespace std;

class Base {
public:
    int id = 1;
};

class Derived : public Base {
public:
    int marks = 100;
};

int main() {
    Derived d;
    Base b = d;
    cout << b.id << endl;
    return 0;
}