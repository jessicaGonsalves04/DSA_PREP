/*
Pattern 8:
1
2   3
3   4   5
4   5   6   7
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        int k=i;
        for(j=0;j<i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}