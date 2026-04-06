/*
Ques : Given the marks of the students. If the marks are greater than 33 print the result as pass otherwise
 fail without using if-else statement.
*/

#include<iostream>
using namespace std;

int main(){
    int mark;
    cout<<"Enter your marks : ";
    cin>>mark;

    (mark > 33 ) ? cout<<"Pass" : cout<<"Fail";
}