// Ques : Given an integer. Print the absolute value of that integer


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;
    if(num > 0){
        cout<<num;
    } 
    else {
        cout<<-num;
    }
}