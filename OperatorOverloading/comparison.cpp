#include <iostream>
using namespace std;

class Student {
    int id;
public:
    Student(int i) : id(i) {}
    bool operator==(Student s) {
        return id == s.id;
    }
};

int main() {
    Student a(101), b(101);
    cout << (a == b ? "Equal" : "Not Equal") << endl;
    return 0;
}