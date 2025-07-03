#include <iostream>
using namespace std;

int* getMax(int* a, int* b) {
    return (*a > *b) ? a : b;
}

int main() {
    int x = 5, y = 10;
    int* max = getMax(&x, &y);
    cout << "Greater is: " << *max;
    return 0;
}