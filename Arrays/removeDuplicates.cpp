#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int count=0;
        int n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[i]==nums[j]){
                continue;
            }
            else {
                nums[i+1]=nums[j];
                i++;
                count++;
            }
        }
        return count+1;
    }
};
int main() {
    Solution s;
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n); 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int newLength = s.removeDuplicates(nums);
    cout << newLength << endl;

    // Output the modified array 
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
