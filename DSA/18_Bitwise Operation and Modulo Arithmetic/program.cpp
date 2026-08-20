

#include<iostream>
using namespace std;
int main(){
    int decimal=5;
    string binary="";
    while(decimal>0){
        if(decimal%2==0){
          binary=binary+'0';
        } else {
            binary+='1';
        }
        // decimal/=2;
        decimal=decimal>>1;
    }
    cout<<binary;
}