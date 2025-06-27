<<<<<<< HEAD
#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main() {
    cout << "Power: " << power(2, 4);
    return 0;
=======
#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}

int main() {
    cout << "Power: " << power(2, 4);
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}