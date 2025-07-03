#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void play() {
        cout << "Instrument playing\n";
    }
};

class Piano : public Instrument {
public:
    void play() {
        cout << "Piano playing\n";
    }
};

class Guitar : public Instrument {
public:
    void play() {
        cout << "Guitar playing\n";
    }
};

int main() {
    Instrument* i[2];
    Piano p;
    Guitar g;
    i[0] = &p;
    i[1] = &g;
    i[0]->play();
    i[1]->play();
    return 0;
}