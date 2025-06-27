#include <iostream>
using namespace std;

class Sum {
    int total;
public:
    Sum(int t) : total(t) {}
    void operator+=(int val) {
        total += val;
    }
    void show() { cout << "Total: " << total << endl; }
};

int main() {
    Sum s(10);
    s += 5;
    s.show();
    return 0;
}