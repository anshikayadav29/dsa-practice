#include<iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working\n";
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager managing\n";
    }
};

class Developer : public Employee {
public:
    void work() override {
        cout << "Developer coding\n";
    }
};

int main() {
    Employee* arr[2];
    Manager m;
    Developer d;
    arr[0] = &m;
    arr[1] = &d;
    for (int i = 0; i < 2; i++) {
        arr[i]->work();
    }
    return 0;
}