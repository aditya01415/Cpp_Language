// Ques : Take positive integer input and tell if it is divisible by 5 and 3
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;
    
    if(num % 5 == 0){
        if(num % 3 == 0){
            cout<<"number is divisible by 5 or 3";
        }else {
            cout<<"Not matching condition";
        }
       
    }
    else {
        cout<<"Not matching condition";
    }
} 