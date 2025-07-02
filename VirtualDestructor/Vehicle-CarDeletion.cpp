#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual ~Vehicle() {
        cout << "Vehicle deleted\n";
    }
};

class Car : public Vehicle {
public:
    ~Car() {
        cout << "Car deleted\n";
    }
};

int main() {
    Vehicle* v = new Car();
    delete v;
    return 0;
}