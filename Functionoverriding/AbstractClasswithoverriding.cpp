#include <iostream>
using namespace std;

class AbstractShape {
public:
    virtual void draw() = 0;
};

class Rectangle : public AbstractShape {
public:
    void draw() override {
        cout << "Drawing Rectangle\n";
    }
};

int main() {
    AbstractShape* s = new Rectangle();
    s->draw();
    delete s;
    return 0;
}