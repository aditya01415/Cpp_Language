/*
Ques : WAP to print sum of digits of a given 
number.
*/

#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a number : ";
    cin>>num;
    int a=num;

    while(num>0){
        int rem=num%10;
        sum+=rem;
        num/=10;
    }

    if(a==0) cout<<"sum of digits of a given number is : "<<0;
    else cout<<"sum of digits of a given number is : "<<sum;


}