<<<<<<< HEAD
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n == 1) return true;
    return (arr[n-1] >= arr[n-2]) && isSorted(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << (isSorted(arr, 5) ? "Sorted" : "Not Sorted");
    return 0;
=======
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n == 1) return true;
    return (arr[n-1] >= arr[n-2]) && isSorted(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << (isSorted(arr, 5) ? "Sorted" : "Not Sorted");
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}