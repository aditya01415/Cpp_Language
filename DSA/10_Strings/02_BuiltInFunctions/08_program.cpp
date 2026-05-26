/*
Ques : Input a string of even length and return the
second half of that string using inbuilt substr
function
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int n=str.length()/2;
    cout<<str.substr(n);
}