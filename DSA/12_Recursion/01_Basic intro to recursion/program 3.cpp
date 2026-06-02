/*
#Class Word
Print "Good Morning" 'n' number of times , where 'n' is taking input from user.
*/

#include<iostream>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout<<"Good Morning ! "<<endl;
    greet(n-1);
    return;
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    greet(n);
    return 0;
}