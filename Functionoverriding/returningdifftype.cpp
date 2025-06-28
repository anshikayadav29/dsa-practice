#include <iostream>
using namespace std;

int result(int x) {
    return x * x;
}

double result(double y) {
    return y * y * y;
}

int main() {
    cout << "Square of 4: " << result(4) << endl;
    cout << "Cube of 2.5: " << result(2.5) << endl;
    return 0;
}