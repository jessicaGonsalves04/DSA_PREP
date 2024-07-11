#include<bits/stdc++.h>
using namespace std;
vector<int> unionSortedArray(vector<int>&a1,vector<int>&a2){
    int n1=a1.size();
    int n2=a2.size();
    int i=0,j=0;
    vector<int> unionArray;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            if(unionArray.size()==0 || unionArray.back()!=a1[i]){
                unionArray.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(unionArray.size()==0 || unionArray.back()!=a2[j]){
                unionArray.push_back(a2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArray.size()==0 || unionArray.back()!=a1[i]){
                unionArray.push_back(a1[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionArray.size()==0 || unionArray.back()!=a2[j]){
                unionArray.push_back(a2[j]);
            }
            j++;
    }
    return unionArray;
}
int main(){
    vector<int> a1={1,1,2,3,4,5,9};
    vector<int> a2={2,3,4,4,5,6,8};
    vector<int> unionArray=unionSortedArray(a1,a2);
    for(int i=0;i<unionArray.size();i++){
        cout<<unionArray[i]<<" ";
    }

}