#include <iostream>
using namespace std;

class Count {
    int val;
public:
    Count(int v) : val(v) {}
    void operator--(int) { val--; }
    void show() { cout << "Value: " << val << endl; }
};

int main() {
    Count c(5);
    c--;
    c.show();
    return 0;
}