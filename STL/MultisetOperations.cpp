#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms = {1, 1, 2};
    for(int x : ms) cout << x << " ";
    return 0;
}