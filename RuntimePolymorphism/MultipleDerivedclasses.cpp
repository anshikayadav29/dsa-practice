#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows\n";
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow moos\n";
    }
};

int main() {
    Animal* a;
    Cat c;
    Cow cw;
    a = &c;
    a->sound();
    a = &cw;
    a->sound();
    return 0;
}