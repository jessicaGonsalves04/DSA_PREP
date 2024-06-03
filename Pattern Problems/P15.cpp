/*
Pattern 15:
n=4;
   *
  ** 
 ***
****
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>n-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}