#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing Square\n";
    }
};

int main() {
    Shape* s[2];
    Circle c;
    Square sq;
    s[0] = &c;
    s[1] = &sq;
    s[0]->draw();
    s[1]->draw();
    return 0;
}