#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<string> us = {"apple", "banana"};
    us.insert("cherry");
    for(auto x : us) cout << x << " ";
    return 0;
}