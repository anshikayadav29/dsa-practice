<<<<<<< HEAD
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 7; i++)
        cout << fibonacci(i) << " ";
    return 0;
=======
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 7; i++)
        cout << fibonacci(i) << " ";
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}