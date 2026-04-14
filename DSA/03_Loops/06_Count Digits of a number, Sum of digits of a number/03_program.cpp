/*
Ques : WAP to print reverse of a given 
number.
*/


#include<iostream>
using namespace std;
int main(){
    int num,res=0;
    cout<<"Enter a number : ";
    cin>>num;
    int lastDigit=0;
     
    while(num>0){
        res*=10;
        lastDigit=num%10;
        res+=lastDigit;
        num/=10;
    }

    cout<<"reverse of a given number is : "<<res;

}