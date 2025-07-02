#include <iostream>
using namespace std;

class Gadget {
public:
    virtual ~Gadget() {
        cout << "Gadget disposed\n";
    }
};

class Phone : public Gadget {
public:
    ~Phone() {
        cout << "Phone disposed\n";
    }
};

int main() {
    Gadget* g = new Phone();
    delete g;
    return 0;
}