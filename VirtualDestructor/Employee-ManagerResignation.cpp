#include <iostream>
using namespace std;

class Employee {
public:
    virtual ~Employee() {
        cout << "Employee left\n";
    }
};

class Manager : public Employee {
public:
    ~Manager() {
        cout << "Manager left\n";
    }
};

int main() {
    Employee* e = new Manager();
    delete e;
    return 0;
}