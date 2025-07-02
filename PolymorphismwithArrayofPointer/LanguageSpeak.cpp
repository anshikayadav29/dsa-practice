#include <iostream>
using namespace std;

class Language {
public:
    virtual void speak() {
        cout << "Speaking Language\n";
    }
};

class Hindi : public Language {
public:
    void speak() {
        cout << "Bol raha hoon Hindi\n";
    }
};

class English : public Language {
public:
    void speak() {
        cout << "Speaking English\n";
    }
};

int main() {
    Language* l[2];
    Hindi h;
    English e;
    l[0] = &h;
    l[1] = &e;
    l[0]->speak();
    l[1]->speak();
    return 0;
}