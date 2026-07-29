
/*
Greatest Common Divisor
Calculate Greatest Common Divisor of two numbers.
*/

#include<iostream>
using namespace std;
int GCD(int a,int b){
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int main(){
    int a=60;
    int b=24;
    cout<<GCD(a,b);
}