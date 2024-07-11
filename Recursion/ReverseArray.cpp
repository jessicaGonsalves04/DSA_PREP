#include<bits/stdc++.h>
using namespace std;

void reverseArray(int l,int arr[],int r){

    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(l+1,arr,r-1);
}
void reverseArrayOneVar(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArrayOneVar(i+1,arr,n);
}

int main(){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(0,arr,n-1);
    cout<<"reversed array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //This will give back original array since we are reversing again
    reverseArrayOneVar(0,arr,n);
    cout<<"reversed array using 1 variable is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

