#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string, float> t(1, "A", 2.5);
    cout << get<0>(t) << " " << get<1>(t);
    return 0;
}