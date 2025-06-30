#include<iostream>
using namespace std;

class Media {
public:
    virtual void play() {
        cout << "Playing media\n";
    }
};

class Audio : public Media {
public:
    void play() override {
        cout << "Playing audio\n";
    }
};

int main() {
    Media* m;
    Audio a;
    m = &a;
    m->play();
    return 0;
}