#include <iostream>
using namespace std;

void check(bool a) {
    cout << "Boolean: " << a << endl;
}

void check(int a) {
    cout << "Integer: " << a << endl;
}

int main() {
    check(true);
    check(5);
    return 0;
}