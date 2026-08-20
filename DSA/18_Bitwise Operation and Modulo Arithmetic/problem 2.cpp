#include<iostream>
#include<cmath>

using namespace std;
int countDigits1(int n){
    return floor(log2(n)+1);
}
int countDigits(int n,int base){
    return floor(log(n)/log(base))+1;
}
int main(){
    long long n=6;
    cout<<"Number of digits : "<<countDigits1(n)<<endl;
    cout<<"Number of digits : "<<countDigits(n,2)<<endl;
    cout<<"Number of digits : "<<countDigits(n,8)<<endl;
    cout<<"Number of digits : "<<countDigits(n,16);
}