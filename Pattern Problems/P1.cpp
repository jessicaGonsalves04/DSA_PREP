// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}