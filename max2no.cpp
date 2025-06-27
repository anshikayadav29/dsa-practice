#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 3, b = 9;
    cout << "Max: " << maxNum(a, b);
    return 0;
}