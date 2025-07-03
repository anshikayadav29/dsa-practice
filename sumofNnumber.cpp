<<<<<<< HEAD
#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    cout << "Sum: " << sumN(5);
    return 0;
=======
#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    cout << "Sum: " << sumN(5);
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}