#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) return binarySearch(arr, low, mid - 1, key);
    else return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int index = binarySearch(arr, 0, 5, 10);
    cout << (index != -1 ? "Found at index: " + to_string(index) : "Not found");
    return 0;
}