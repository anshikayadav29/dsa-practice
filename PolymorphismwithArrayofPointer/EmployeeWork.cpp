#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working\n";
    }
};

class Manager : public Employee {
public:
    void work() {
        cout << "Manager managing\n";
    }
};

class Engineer : public Employee {
public:
    void work() {
        cout << "Engineer coding\n";
    }
};

int main() {
    Employee* e[2];
    Manager m;
    Engineer en;
    e[0] = &m;
    e[1] = &en;
    e[0]->work();
    e[1]->work();
    return 0;
}