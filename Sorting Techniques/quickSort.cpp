
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


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
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
        int par=partition(arr,low,high);
        quickSort(arr,low,par-1);
        quickSort(arr,par+1,high);
        return;
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
       while(i<j){
           while(arr[i]<=pivot && i<=high-1){
               i++;
           }
           while(arr[j]>pivot && j>=low+1){
               j--;
           }
           if(i<j){
               swap(arr[i],arr[j]);
           }
       }
       swap(arr[j],arr[low]);
       return j;
    }
};



int main()
{
    int arr[1000],n,T,i;
    cout<<"Enter the number of trials";
    cin>>T;
    while(T--){
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter the numbers";
    for(i=0;i<n;i++)
      cin>>arr[i];
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
