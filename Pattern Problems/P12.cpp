/*
Pattern 11:
A
B   C
C   D   E
D   E   F   G
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int i,j;
    char a='A';
    for(i=1;i<=n;i++){
        char k=a;
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        a++;
        cout<<endl;
    }
}