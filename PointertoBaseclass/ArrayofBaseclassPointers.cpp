#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark\n";
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow\n";
    }
};

int main() {
    Animal* arr[2];
    Dog d;
    Cat c;

    arr[0] = &d;
    arr[1] = &c;

    for (int i = 0; i < 2; i++) {
        arr[i]->sound();
    }

    return 0;
}