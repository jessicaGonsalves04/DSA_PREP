/*
1
2   3
4   5   6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int k=1;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}