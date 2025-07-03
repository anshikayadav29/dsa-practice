#include <iostream>
using namespace std;

class Parent {
public:
    void work() {
        cout << "Parent working\n";
    }
};

class Child : public Parent {
public:
    void work() {
        cout << "Child working\n";
    }
};

int main() {
    Parent *p = new Child();
    p->work();
    delete p;
    return 0;
}