#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows\n";
    }
};

int main() {
    Animal* a[2];
    Dog d; Cat c;
    a[0] = &d;
    a[1] = &c;

    a[0]->sound(); 
    a[1]->sound(); 
    return 0;
}