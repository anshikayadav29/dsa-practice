#include <iostream>
using namespace std;

void greet(char ch) {
    cout << "Character: " << ch << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet('A');
    greet("Anshika");
    return 0;
}