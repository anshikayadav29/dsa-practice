#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int,int> idx; // value -> index
    for (int i = 0; i < (int)nums.size(); ++i) {
        int need = target - nums[i];
        auto it = idx.find(need);
        if (it != idx.end()) return {it->second, i};
        idx[nums[i]] = i;
    }
    return {}; // problem statement मानकर यह कभी नहीं आएगा
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    auto res = twoSum(nums, target);
    if (!res.empty())
        cout << res[0] << " " << res[1] << "\n"; // output indices
    else
        cout << "No pair found\n";
    return 0;
}
