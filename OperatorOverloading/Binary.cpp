#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r, int i): real(r), imag(i) {}
    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void show() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
    Complex c1(1, 2), c2(3, 4), c3 = c1 + c2;
    c3.show();
    return 0;
}