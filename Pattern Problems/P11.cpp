/*
Pattern 11:
A
B   B
C   C   C
D   D   D   D
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    char a='A';
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<char(a+i)<<" ";
        }
        cout<<endl;
    }
}
