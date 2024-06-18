#include<bits/stdc++.h>
using namespace std;
void print(int n,int i){
    if(n==i){
        return;
    }
    else{
        cout<<"Maggie"<<endl;
        print(n,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    int i=0;
    print(n,i);
}