
#include<iostream>
using namespace std;
int main(){
    string binary="100111";
    int n=binary.size();
    int decimal=0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';
        decimal=decimal+num*(1<<(n-i-1));
    }
    cout<<decimal;
}