
//Ques: Make a function which calculates ‘a’ raised to the power ‘b’ using loop

#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0 && b==0){
        cout<<"0 raised to power 0 is not defined";
        return 0;
    }
    if(a==0) return 0;
    int pow=1;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    return pow;
}
int main(){
    cout<<power(0,0);
}