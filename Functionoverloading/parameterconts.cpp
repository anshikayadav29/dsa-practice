#include <iostream>
using namespace std;

void display(int a) {
    cout << "Normal int: " << a << endl;
}

void displayConst(int a) {
    cout << "Const int simulation: " << a << endl;
}

int main() {
    int x = 5;
    const int y = 10;
    display(x);        
    displayConst(y);   
    return 0;
}