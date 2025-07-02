#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle moving\n";
    }
};

class Car : public Vehicle {
public:
    void move() {
        cout << "Car moving\n";
    }
};

class Bike : public Vehicle {
public:
    void move() {
        cout << "Bike moving\n";
    }
};

int main() {
    Vehicle* v[2];
    Car c;
    Bike b;
    v[0] = &c;
    v[1] = &b;
    v[0]->move();
    v[1]->move();
    return 0;
}