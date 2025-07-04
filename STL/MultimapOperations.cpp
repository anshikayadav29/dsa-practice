#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> m;
    m.insert({1, "A"});
    m.insert({1, "B"});
    for(auto x : m) cout << x.first << " " << x.second << endl;
    return 0;
}