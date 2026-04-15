/*
Ques : Print the factorial of a given number ‘n’.
*/

#include<iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"Enter a number : ";
    cin>>num;

    // for(int i=num;i>0;i--){
    //        fact*=i;
    // }
    for(int i=1;i<=num;i++){
        fact*=i;
    }

    cout<<"factorial of a given number is : "<<fact;
}