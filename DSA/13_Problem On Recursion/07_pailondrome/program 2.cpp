// Palindrome using recursion
// Find out whether a given string is palindrome or not 
// using recursion

#include<iostream>
using namespace std;
bool Palindrome(string str,int i,int j){
    if(i>=j) return true;
    if(str[i]!=str[j]) return false;
    return Palindrome(str,i+1,j-1);
}
int main(){
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    cout<<Palindrome(str,0,str.size()-1);
    
}