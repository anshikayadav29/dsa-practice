#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["apple"] = 2;
    m["banana"] = 5;
    for(auto x : m) cout << x.first << " " << x.second << endl;
    return 0;
}