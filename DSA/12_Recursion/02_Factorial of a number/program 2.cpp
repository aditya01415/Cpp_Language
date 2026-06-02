#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    if(n==1) return f;
    f=n*fact(n-1);
}
int main(){
    cout<<fact(6);
}