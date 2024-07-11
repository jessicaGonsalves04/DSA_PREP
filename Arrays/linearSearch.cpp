#include<bits/stdc++.h>
using namespace std;
int linearSearch (vector<int>&nums,int k){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==k)
        return i;
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
        }
    int m=linearSearch(nums,k);
    if(m==-1){
        cout<<"Element not found";
    }
    else{
    cout<<"element found in index "<<m;
    }
}
