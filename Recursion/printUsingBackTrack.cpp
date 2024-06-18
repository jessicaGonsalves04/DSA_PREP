#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<i<<endl;//Here print is done once the base case is attained by back-tracking
}
int main(){
    int n;
    cin>>n;
    print(n,n);
    return 0;
}