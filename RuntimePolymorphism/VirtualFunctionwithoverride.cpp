#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle\n";
    }
    void area() {
        cout << "Area of circle\n";
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->draw();
    
    return 0;
}