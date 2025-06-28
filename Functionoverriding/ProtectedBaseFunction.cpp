#include <iostream>
using namespace std;

class Parent {
protected:
    virtual void show() {
        cout << "Parent show()\n";
    }
public:
    void callShow() {
        show();
    }
};

class Child : public Parent {
protected:
    void show() override {
        cout << "Child show()\n";
    }
};

int main() {
    Child c;
    c.callShow();
    return 0;
}