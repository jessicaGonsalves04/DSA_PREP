/*
Pattern 19:
n=4;
            1
        2   3
    4   5   6
7   8   9   10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i+j<=n){
                cout<<" "<<" ";
               
            }
            else{
                cout<<a<<" ";
                 a++;
            }
        }
        cout<<endl;
    }
}