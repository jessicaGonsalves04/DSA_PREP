/*
Pattern 20:
   1
  121
 12321
1234321
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,l,m;
    cin>>n;
    //Print spaces and 1st triangle
    /*
       1      
      12
     123
    1234
    */
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=n;j++){
            if(i+j<=n){
                cout<<" "<<" ";
            }
            else{
                cout<<k<<" ";
                k++;
            }
    }
    /*
    2nd Triangle
    ___
    1__
    21_
    321
    
    */
    l=i-1;
    for(j=n+1;j<2*n;j++){
       if(l>=1){
        cout<<l<<" ";
        l--;
       }
       else{
        cout<<" "<<" ";
       }
    }
    
    cout<<endl;
}
}