#include <iostream>
using namespace std;

class Employee {
public:
    virtual void role() {
        cout << "Generic Employee\n";
    }
};

class Developer : public Employee {
public:
    void role() override {
        cout << "Writes code\n";
    }
};

class Manager : public Employee {
public:
    void role() override {
        cout << "Manages team\n";
    }
};

int main() {
    Employee* e;
    Developer d;
    Manager m;

    e = &d;
    e->role(); 

    e = &m;
    e->role(); 

    return 0;
}