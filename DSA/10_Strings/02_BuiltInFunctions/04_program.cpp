/*
reverse() on string
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="abcdef";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    // reverse(str.begin()+2,str.end());
    // cout<<str<<endl;
    // reverse(str.begin()+2,str.end()-1);
    // cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+5);
    cout<<str<<endl;
    
}