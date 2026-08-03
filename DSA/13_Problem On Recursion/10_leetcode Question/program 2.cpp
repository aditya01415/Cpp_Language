
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

#include<iostream>
using namespace std;
void generateParentheses(string str,int open,int close,int n){
    if(close==n){
        cout<<str<<endl;
        return;
    }
    if(open<n) generateParentheses(str+'(',open+1,close,n);
    if(close<open) generateParentheses(str+')',open,close+1,n);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    generateParentheses("",0,0,n);
}