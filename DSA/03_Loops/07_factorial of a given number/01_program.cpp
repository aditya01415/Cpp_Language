/*
Ques : Print the nth fibonacci number.
*/

#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,sum=0,n;
    cout<<"Enter a number : ";
    cin>>n;
     cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        sum=a+b;
         cout<<sum<<" ";
        a=b;
        b=sum;
    }

    // cout<<sum;
    //cout<<b;
}