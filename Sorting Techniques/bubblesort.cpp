#include<bits/stdc++.h>
using namespace std;
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp =arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

// }
void bubbleSort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int didSwap=0;
        for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            didSwap=1;
            }
        }
        if(didSwap==0){
            break;
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
    bubbleSort(arr,n);
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;

}