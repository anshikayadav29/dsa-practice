#include <iostream>
using namespace std;

class X {
public:
    virtual ~X() {
        cout << "X\n";
    }
};

class Y : public X {
public:
    ~Y() {
        cout << "Y\n";
    }
};

int main() {
    X* x = new Y();
    delete x;
    return 0;
}