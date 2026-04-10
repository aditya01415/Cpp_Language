/*
Ques : Display this GP - 1,2,4,8,16,32,.. upto ‘n’ 
terms
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // for(int i=1;i<=2^(n-1);i*=2){
    //     cout<<i<<" ";
    // }

    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a*=2;
    }
}