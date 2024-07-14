#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int>&nums){
    int n = nums.size();
    int hash[3]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<hash[i];j++){
            nums[k++]=i;
            }
        }
return;
        
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sortArray(nums);
    for(int j=0;j<nums.size();j++){
            cout<<nums[j]<<" ";
        }

}