//print sum 1 to n (return type)

#include<iostream>
using namespace std;
int summation(int n){
    if(n==0) return 0;
    return n+summation(n-1);
}
int main(){
    cout<<summation(10);
}