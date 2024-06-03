/*
Pattern 9:
A   A   A
B   B   B
C   C   C
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    char a='A';
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a<<" ";
        }
        a++;
        cout<<endl;
    }

}
