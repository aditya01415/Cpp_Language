/*
Ques : WAP to count digits of a given number
*/

#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter a number : ";
    cin>>num;
    int a=num;

    while(num>0){
        count++;
        num/=10;
    }

    if(a==0){
         cout<<"Number of digit in given number is : "<<1<<endl;
    }
    else{
        cout<<"Number of digit in given number is : "<<count<<endl;
    }
}