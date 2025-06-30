#include<iostream>
using namespace std;

class Abstract {
public:
    virtual void show() = 0; 
};

class Concrete : public Abstract {
public:
    void show() override {
        cout << "Implemented pure virtual function\n";
    }
};

int main() {
    Concrete c;
    c.show();
    return 0;
}