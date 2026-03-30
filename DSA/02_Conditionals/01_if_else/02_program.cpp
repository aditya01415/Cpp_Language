// Ques : Take positive integer input and tell if it is even or odd

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;
  if(num % 2 == 0){
        cout<<"Given number is a Even number";
    } else {
        cout<<"Given number is a Odd number";
    } 
}