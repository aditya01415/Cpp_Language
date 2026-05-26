/*
Ques : Return the total number of digits in a
number without using any loop.

Hint : Try using inbuilt to_string() function.
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=12345;
    string s=to_string(n);
    cout<<s.length();
}