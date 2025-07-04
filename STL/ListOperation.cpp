#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3};
    l.push_front(0);
    for(int i : l) cout << i << " ";
    return 0;
}