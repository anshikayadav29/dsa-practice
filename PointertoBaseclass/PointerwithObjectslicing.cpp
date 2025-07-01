#include <iostream>
using namespace std;

class Base {
public:
    int x = 5;
};

class Derived : public Base {
public:
    int y = 10;
};

void func(Base b) {
    cout << "Base x: " << b.x << endl;
}

int main() {
    Derived d;
    func(d); 

    return 0;
}