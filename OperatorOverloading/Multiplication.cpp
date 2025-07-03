#include <iostream>
using namespace std;

class Multiply {
    int value;
public:
    Multiply(int v) : value(v) {}
    Multiply operator*(Multiply m) {
        return Multiply(value * m.value);
    }
    void show() { cout << "Result: " << value << endl; }
};

int main() {
    Multiply m1(3), m2(4);
    Multiply m3 = m1 * m2;
    m3.show();
    return 0;
}