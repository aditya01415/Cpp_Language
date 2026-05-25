/*
Ques : Input a string of even length and
reverse the first half of the string.
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=str.length();
    reverse(str.begin(),str.begin()+len/2);
    cout<<str<<endl;
    
}