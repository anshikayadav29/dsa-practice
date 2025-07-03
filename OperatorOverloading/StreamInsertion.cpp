#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b): x(a), y(b) {}
    friend ostream& operator<<(ostream& out, Point p) {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main() {
    Point p(2, 3);
    cout << p << endl;
    return 0;
}
