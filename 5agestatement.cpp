#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age < 18){
        cout << "not eligible for job";
    }
    else if(age < 54){
        cout << "eligible for job, but retirement soon";
    }
    else {
        cout << "retirement time";
    }

    return 0;
}