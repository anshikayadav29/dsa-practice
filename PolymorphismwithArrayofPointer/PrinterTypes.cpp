#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print() {
        cout << "Generic Printer\n";
    }
};

class Laser : public Printer {
public:
    void print() {
        cout << "Laser Printer\n";
    }
};

class Inkjet : public Printer {
public:
    void print() {
        cout << "Inkjet Printer\n";
    }
};

int main() {
    Printer* p[2];
    Laser l;
    Inkjet i;
    p[0] = &l;
    p[1] = &i;
    p[0]->print();
    p[1]->print();
    return 0;
}