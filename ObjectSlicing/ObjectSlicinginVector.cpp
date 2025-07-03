#include <iostream>
#include <vector>
using namespace std;

class Base {
public:
    int x = 11;
    virtual void show() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    int y = 22;
    void show() {
        cout << "Derived\n";
    }
};

int main() {
    vector<Base> v;
    Derived d;
    v.push_back(d);
    v[0].show();
    return 0;
}