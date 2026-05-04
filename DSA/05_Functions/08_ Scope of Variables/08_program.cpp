/*
Ques : Swap 2 numbers
*/

#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    // int c;
    // c=a;
    // a=b;
    // b=c;
    a=a+b;  //a=5+3=8
    b=a-b;  //b=8-3=5
    a=a-b;  //a=8-5=3
    cout<<a<<" "<<b;
}