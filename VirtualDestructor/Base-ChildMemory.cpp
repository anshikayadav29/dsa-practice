#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base\n";
    }
};

class Child : public Base {
public:
    ~Child() {
        cout << "Child\n";
    }
};

int main() {
    Base* b = new Child();
    delete b;
    return 0;
}