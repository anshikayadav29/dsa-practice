#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 1, 4, 2};

    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}