/*
Write a function to find out the first and last digit of a number
without returning anything.
*/

void f_l_digit(int n,int* ptr1,int* ptr2){
    *ptr1=n%10;
    while(n>9){
        n/=10;
    }
    *ptr2=n;
    return;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int l_digit,f_digit;
    int* ptr1=&l_digit;
    int* ptr2=&f_digit;
    f_l_digit(n,ptr1,ptr2);
    cout<<"first digit is : "<<f_digit<<endl;
    cout<<"Last digit is : "<<l_digit;
}