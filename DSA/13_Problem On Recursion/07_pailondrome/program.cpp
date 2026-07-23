// Palindrome using recursion
// Find out whether a given string is palindrome or not 
// using Iteration

#include<iostream>
using namespace std;
bool Palindrome(string str){
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    cout<<Palindrome(str);
    
}