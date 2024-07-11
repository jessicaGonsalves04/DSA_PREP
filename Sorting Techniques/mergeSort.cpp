
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         
         int low=l,high=r;
         int temp[r+1];
         int m2=m+1;
         int i=0;
         while(l<=m && m2<=r){
             if(arr[l]<arr[m2]){
                 temp[i++]=arr[l];
                 l++;
             }
             else{
                 temp[i++]=arr[m2];
                 m2++;
             }
            
         }
         while(l<=m){
             temp[i++]=arr[l];
             l++;
         }
         while(m2<=r){
             temp[i++]=arr[m2];
             m2++;
         }
         for(int j=low;j<=high;j++){
             arr[j]=temp[j-low];
             
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

int main()
{
    int n,T,i;
    cout<<"Enter no of times u wanna perform";
    scanf("%d",&T);

    while(T--){
    cout<<"Enter no of elements:"<<endl;
    scanf("%d",&n);
    int arr[n+1];
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
