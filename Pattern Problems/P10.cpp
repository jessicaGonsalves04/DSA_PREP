/*
Pattern 10:
A   B   C
D   E   F
G   H   I
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    char a='A';
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}