#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}