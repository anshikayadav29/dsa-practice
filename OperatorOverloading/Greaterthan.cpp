#include <iostream>
using namespace std;

class Box {
    int size;
public:
    Box(int s) : size(s) {}
    bool operator>(Box b) {
        return size > b.size;
    }
};

int main() {
    Box b1(10), b2(7);
    cout << (b1 > b2 ? "b1 is bigger" : "b2 is bigger") << endl;
    return 0;
}