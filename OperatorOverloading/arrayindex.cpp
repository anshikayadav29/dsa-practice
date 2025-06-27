#include <iostream>
using namespace std;

class Array {
    int arr[5];
public:
    int& operator[](int i) {
        return arr[i];
    }
};

int main() {
    Array a;
    a[0] = 10;
    a[1] = 20;
    cout << a[0] << ", " << a[1] << endl;
    return 0;
}