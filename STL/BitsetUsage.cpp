#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<4> b(string("1010"));
    cout << b.count();
    return 0;
}