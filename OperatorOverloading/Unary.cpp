#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) : x(a) {}
    void operator-() {
        x = -x;
    }
    void show() { cout << "x = " << x << endl; }
};

int main() {
    Number n(10);
    -n;
    n.show();
    return 0;
}