#include <iostream>
using namespace std;

int main() {
    int* ptr = NULL;
    if (ptr == NULL)
        cout << "Pointer is NULL";
    else
        cout << "Pointer is not NULL";
    return 0;
}