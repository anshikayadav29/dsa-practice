#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<int, string> m;
    m[1] = "one";
    m[2] = "two";
    cout << m[2];
}