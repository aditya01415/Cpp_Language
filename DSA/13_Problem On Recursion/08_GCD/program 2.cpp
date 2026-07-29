
/*
Greatest Common Divisor
Calculate Greatest Common Divisor of two numbers.
*/

#include<iostream>
using namespace std;
int GCD1(int a,int b){
    if(b%a==0) return a;
    GCD1(b%a,a);
}
int GCD2(int a,int b){
    if(a==0) return b;
    else return GCD2(b%a,a);
}
int main(){
    int a=24;
    int b=60;
    cout<<GCD1(a,b)<<endl;
    cout<<GCD2(a,b)<<endl;
}