/*
Pattern: 
1   2   3
4   5   6
7   8   9
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=3;j++){
            cout<<3*i+j<<" ";
        }
        cout<<endl;
    }
}