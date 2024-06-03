/*
Pattern 14:
n=3;
A   B   C
B   C   D
C   D   E
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    char a='A';
    for(i=1;i<=n;i++){
        for(j=0;j<n;j++){
            cout<<char(a+j)<<" ";
        }
        a++;
        cout<<endl;
    }
}