/*
Ques : Given two strings s and t, return true if t is an
anagram of s, and false otherwise.

Input : s = physicswallah, t = wallahphysics
Output: YES
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter a string : ";
    string s;
    cin>>s;
    cout<<"Enter another string : ";
    string t;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        cout<<"Yes";
    }else cout<<"no";

}