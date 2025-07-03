#include <iostream>
using namespace std;

void square(int* n) {
    *n = (*n) * (*n);
}

int main() {
    int x = 4;
    square(&x);
    cout << "Square is: " << x;
    return 0;
}