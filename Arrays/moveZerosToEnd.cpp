#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // pointer to next non zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    s.moveZeroes(nums);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
