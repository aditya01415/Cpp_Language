/*
Ques : WAP to check if a number is prime or 
not.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag=true;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }


    if(n==1){
        cout<<"1 is neither prime or not a composite ";
    } else if(flag){
        cout<<"Given number is prime number ";
    }else {
        cout<<"Given number is not a composite number ";
    }
}