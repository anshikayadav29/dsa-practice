#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m = {{"a", 1}, {"b", 2}};
    m["c"] = 3;
    for(auto x : m) cout << x.first << " " << x.second << endl;
    return 0;
}