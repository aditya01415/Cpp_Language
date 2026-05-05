/*
Write a program to calculate sum of two numbers
using pointers.
*/

#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cout<<"Enter two numbers : ";
    // cin>>x>>y;

    // int* p1=&x;
    // int* p2=&y;

    // cout<<*p1+*p2;

    int x,y;
    int* p1=&x;
    int* p2=&y;

    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter second number : ";
    cin>>*p2;

    cout<<*p1+*p2<<endl;
    cout<<x+y<<endl;

}