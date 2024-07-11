#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>&nums,int a,int b){
        while(a<b){
            int temp = nums[a];
            nums[a] = nums[b];
            nums[b] = temp;
            a++;
            b--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};

int main() {
    Solution s;
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n); // Ensure the vector has the correct size
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    s.rotate(nums, k);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
