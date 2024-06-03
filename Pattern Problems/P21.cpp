/*
Pattern 21:
n=5;
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i+1){
                cout<<j<<" ";
            }
            else{
                cout<<"*"<<" ";
            }
        }
        int l=n-i+1;
        for(j=2*n;j>n;j--){
            if(j>2*n-i+1){
                cout<<"*"<<" ";
            }
            else{
                cout<<l<<" ";
                l--;
            }
        }
        cout<<endl;

}
}