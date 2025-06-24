#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p = {"Anshika", 20};
    Person* ptr = &p;

    cout << ptr->name << " is " << ptr->age << " years old.";
    return 0;
}