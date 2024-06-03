/*
Pattern 7:
1
2   1
3   2   1
4   3   2   1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}