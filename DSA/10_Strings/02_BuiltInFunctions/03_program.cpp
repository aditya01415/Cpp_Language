/*
+ operator on string
*/

#include<iostream>
using namespace std;
int main(){
    string str="abcd";
    cout<<str<<endl;
    str=str+"efg";
    
    cout<<str<<endl;
    str="ijkl"+str;
    cout<<str<<endl;
    
}