#include <iostream>
using namespace std;

class Notification {
public:
    virtual void alert() {
        cout << "Notification alert\n";
    }
};

class SMS : public Notification {
public:
    void alert() {
        cout << "SMS Alert\n";
    }
};

class Email : public Notification {
public:
    void alert() {
        cout << "Email Alert\n";
    }
};

int main() {
    Notification* n[2];
    SMS s;
    Email e;
    n[0] = &s;
    n[1] = &e;
    n[0]->alert();
    n[1]->alert();
    return 0;
}