// Ques : Take positive integer input and tell if it is divisible by 5 or not.


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;
    if(num % 5 == 0){
        cout<<"Given number is a divisible by 5";
    } else {
        cout<<"Given number is not divisible by 5";
    }
}
