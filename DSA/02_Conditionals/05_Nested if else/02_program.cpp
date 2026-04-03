// Ques : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;
    
    if(num % 5 == 0 || num % 3 == 0 ){
        if(num % 15 != 0)
        {
            cout<<"Given number is divisible by 5 or 3 but it's not divisible by 15.";
        }
        else{
            cout<<"Given number is not divisible by 5 or 3 or it's divisible by 15.";
        }
        
       
    } else{
     cout<<"Given number is not divisible by 5 or 3 or it's divisible by 15.";
    }
}