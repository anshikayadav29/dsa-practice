#include <iostream>
using namespace std;

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    cout << "Average: " << average(3, 6, 9);
    return 0;
}