/*
Pattern 3:
*
*   *
*   *   *
*   *   *   *
*   *   *   *   *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}