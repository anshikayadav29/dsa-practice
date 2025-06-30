#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting\n";
    }
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starting\n";
    }
};

void run(Vehicle &v) {
    v.start();
}

int main() {
    Car c;
    run(c);
    return 0;
}