#include <iostream>
using namespace std;

class Account {
public:
    virtual void info() {
        cout << "General Account\n";
    }
};

class Savings : public Account {
public:
    void info() {
        cout << "Savings Account\n";
    }
};

class Current : public Account {
public:
    void info() {
        cout << "Current Account\n";
    }
};

int main() {
    Account* a[2];
    Savings s;
    Current c;
    a[0] = &s;
    a[1] = &c;
    a[0]->info();
    a[1]->info();
    return 0;
}