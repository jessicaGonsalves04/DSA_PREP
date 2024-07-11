#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
      int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    insertionSort(arr,n);
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}