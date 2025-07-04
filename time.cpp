#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool hasDuplicate(vector<int>& arr) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 2};
    if (hasDuplicate(nums))
        cout << "Duplicates found" << endl;
    else
        cout << "No duplicates" << endl;

    return 0;
}