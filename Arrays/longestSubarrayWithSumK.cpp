#include<bits/stdc++.h>
uisng namespace std;
int longestSubarrayWithSumK(vector<int> a,long long k){
    int n=arr.size();
    map<long long,int>preSumMap;
    long long sum;
    int maxLen;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-i;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
    }
    return maxLen
}

int main(){
    int n;
    long long k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=longestSubarrayWithSumK(arr,k);
    cout<<count<<endl;
}