#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark!\n";
    }

    void onlyDog() {
        cout << "Dog-specific function\n";
    }
};

int main() {
    Animal* a = new Dog();

    a->sound();

    Dog* d = dynamic_cast<Dog*>(a);
    if (d) {
        d->onlyDog();
    }

    delete a;
    return 0;
}