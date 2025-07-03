<<<<<<< HEAD
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int num = 13;
    cout << (isPrime(num) ? "Prime" : "Not Prime");
    return 0;
=======
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int num = 13;
    cout << (isPrime(num) ? "Prime" : "Not Prime");
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}