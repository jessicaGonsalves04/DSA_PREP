/*
Pattern 4:
1
2   2
3   3   3
4   4   4   4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}