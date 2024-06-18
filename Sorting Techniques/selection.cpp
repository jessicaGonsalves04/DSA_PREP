#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    int min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"the sorted list is"<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
 }
        return 0;
}