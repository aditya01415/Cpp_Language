
/*
Practice
Given an integer n, find the maximum power of two that is 
smaller than n.
-

*/
#include<iostream>
using namespace std;

int maxPower21(int n){
    int temp;
    while(n>0){
        n=((n)&(n-1));
        if(n==0) break;
        temp=n;
    }
    return temp;
}
int maxPower22(int n){
    int temp;
    while(n>0){
        temp=n;
        n=((n)&(n-1));
    }
    return temp;
}
int maxPower2(int n){
     n=n | (n>>1);
     n=n | (n>>2);
     n=n | (n>>4);
     n=n | (n>>8);
     n=n | (n>>16);

     return (n+1)>>1;
}
int main(){
   cout<<maxPower21(24)<<endl;
   cout<<maxPower22(24)<<endl;
   cout<<maxPower2(24)<<endl;
}