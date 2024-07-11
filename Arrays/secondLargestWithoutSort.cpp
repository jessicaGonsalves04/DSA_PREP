#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int slarge=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){ 
            slarge=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slarge){
            slarge=arr[i];
        }
    }
    cout<<"Second largest is:"<<slarge<<endl;

}