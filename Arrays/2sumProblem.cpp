#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        map<int,int>ans;
        int rem=0;
        vector <int> indices;
        for(int i=0;i<n;i++){
            int num=nums[i];
            rem=target-num;
            if(ans.find(rem)!=ans.end()){
                return{ans[rem],i};
             }
            ans[num]=i;
            
        }
        return {-1,-1};

    }
int main(){
    int n;
    int target;
    vector<int>nums;
    cin>>n>>target;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>ans=twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}