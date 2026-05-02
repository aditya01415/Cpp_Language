
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 number for HCF : ";
    cin>>a>>b;
    int hcf=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
             hcf=i; 
        }
    }
    cout<<"Hcf is : "<<hcf;
}