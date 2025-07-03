#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main() {
    cout << "Reverse: " << reverseNum(1234);
    return 0;
}
