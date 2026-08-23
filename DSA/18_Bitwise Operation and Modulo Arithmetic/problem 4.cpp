/*
Calculate the minimum number of bit flips to convert from 
one number to another. 
Example : 
5 can be written as 0101 and 
11 can be written as 1011, so number of bit flips required will be 
3.
*/

#include<iostream>
using namespace std;

int minBitFlip(int a,int b){
    int n=a^b;
    int minCount=0;
    while(n>0){
        minCount++;
        n=((n)&(n-1));
    }
    return minCount;
}
int main(){
   cout<<minBitFlip(23,31)<<endl;
   cout<<minBitFlip(23,32)<<endl;
} 