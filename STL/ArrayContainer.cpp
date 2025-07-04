#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 3> arr = {1, 2, 3};
    for(int x : arr) cout << x << " ";
    return 0;
}