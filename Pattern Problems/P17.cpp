/*
Pattern 17:
n=4;
****
 ***
  **
   *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=i){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
    }
    cout<<endl;
}
}