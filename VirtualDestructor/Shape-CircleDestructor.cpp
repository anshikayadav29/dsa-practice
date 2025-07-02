#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {
        cout << "Shape destroyed\n";
    }
};

class Circle : public Shape {
public:
    ~Circle() {
        cout << "Circle destroyed\n";
    }
};

int main() {
    Shape* s = new Circle();
    delete s;
    return 0;
}