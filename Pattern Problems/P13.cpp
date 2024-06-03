/*
Pattern 13:
n=4;
D
C   D
B   C   D
A   B   C   D
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    char a='A';
    char k;
   for(i=1;i<=n;i++){
    k=a+n-i;
    for(j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
   }
}