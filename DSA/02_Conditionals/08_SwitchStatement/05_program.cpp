/*
Ques : Write  program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The Calculator should input two numbers and an operator from user.
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice;
    cout<<"Enter your operands : ";
    cin>>a>>choice>>b;

    if(choice == '+') cout<<"Addition is : "<<a+b<<endl;
    if(choice == '-') cout<<"Substraction is : "<<a-b<<endl;
    if(choice == '*') cout<<"multiplication is : "<<a*b<<endl;
    if(choice == '/') cout<<"Division is : "<<a/b<<endl;
    if(choice == '%') cout<<"Remainder is : "<<a%b<<endl;
    
    
}