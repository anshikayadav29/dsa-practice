#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() : count(0) {}
    void operator++() {
        ++count;
    }
    void show() { cout << "Count: " << count << endl; }
};

int main() {
    Counter c;
    ++c;
    c.show();
    return 0;
}