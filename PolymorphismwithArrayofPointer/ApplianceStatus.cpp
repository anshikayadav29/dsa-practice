#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void status() {
        cout << "Appliance status\n";
    }
};

class Fan : public Appliance {
public:
    void status() {
        cout << "Fan is On\n";
    }
};

class Light : public Appliance {
public:
    void status() {
        cout << "Light is Off\n";
    }
};

int main() {
    Appliance* a[2];
    Fan f;
    Light l;
    a[0] = &f;
    a[1] = &l;
    a[0]->status();
    a[1]->status();
    return 0;
}