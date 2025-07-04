#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {3, 1, 4};
    s.insert(2);
    for(int x : s) cout << x << " ";
    return 0;
}