/*
Pattern 16:
n=4;
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j<=i){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}