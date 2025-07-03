<<<<<<< HEAD
#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    printNto1(5);
    return 0;
=======
#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    printNto1(5);
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}