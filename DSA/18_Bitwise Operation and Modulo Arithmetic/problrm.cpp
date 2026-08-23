
/*
Practice
Given an integer n, flip all its bits i.e. if the given bit is 1, 
change it to 0 and vice versa.

*/
#include<iostream>
using namespace std;

int flips0to1(int n){
     int a=n;
     n=n | (n>>1);
     n=n | (n>>2);
     n=n | (n>>4);
     n=n | (n>>8);
     n=n | (n>>16);

     return a^n;
}
int flips0to12(int n){
    int p=n;
    int a=n;
    while(n>0){
        a=n;
        n=n & (n-1);
    }
    a=a<<1;
    a=a-1; 

    return p^a;
}
int main(){
   cout<<flips0to1(24)<<endl;
   cout<<flips0to12(24)<<endl;
}