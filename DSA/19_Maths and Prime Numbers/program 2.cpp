
#include<iostream>
#include<cmath>
using namespace std;
void printFactors1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}
void printFactors2(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) {
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        }
    }
}
void printFactors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i=sqrt(n);i>0;i--){
         if(n%i==0) if(i!=sqrt(n)) cout<<n/i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    printFactors(n);
    cout<<endl;
    printFactors2(n);
    cout<<endl;
    printFactors1(n);
}