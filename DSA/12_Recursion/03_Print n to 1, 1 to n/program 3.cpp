//print sum from 1 to n(paramatorized)

#include<iostream>
using namespace std;
void summation(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    summation(sum+n,n-1);
}
int main(){
    summation(0,10);
}