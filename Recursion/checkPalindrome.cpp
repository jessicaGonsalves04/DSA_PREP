#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int i,string &word){
    int n=word.size();
    if(i>=n/2){
        return true;//coz only when the remaining letters match it reaches till center
    }
    if(word[i]!=word[n-i-1]){
        return false;
    }
    return checkPalindrome(i+1,word);//checks the letters ahead and returns value accordingly
}
int main(){
    string word;
    cin>>word;
    bool cond=checkPalindrome(0,word);
    if(cond){
        cout<<"Palindrome";
        }
        else{
            cout<<"Not Palindrome";
            }
            return 0;
}