/*
Ques : Write  program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The Calculator should input two numbers and an operator from user.
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice;
    cout<<"Enter your operands : ";
    cin>>a>>b;
    cout<<"Enter your operator : ";
    cin>>choice;
    
    switch (choice)
    {
    case '+':
        cout<<"Addition is : "<<a+b<<endl;
        break;
    
    case '-':
        cout<<"Substraction is : "<<a-b<<endl;
        break;
    
    case '*':
        cout<<"Multiplication is : "<<a*b<<endl;
        break;
    
    case '/':
        cout<<"Division is : "<<a/b<<endl;
        break;
    
    case '%':
        cout<<"Remainder is : "<<a%b<<endl;
        break;
    
    default:
        break;
    }

}