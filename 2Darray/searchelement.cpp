#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int key = 50;
    bool found = false;

    for (int i = 0; i < 3 && !found; i++)
        for (int j = 0; j < 3; j++)
            if (a[i][j] == key) {
                found = true;
                break;
            }

    cout << (found ? "Element Found" : "Not Found");
    return 0;
}