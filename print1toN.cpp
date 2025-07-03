<<<<<<< HEAD
#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    cout << n << " ";
}

int main() {
    print1toN(5);
    return 0;
=======
#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    cout << n << " ";
}

int main() {
    print1toN(5);
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}