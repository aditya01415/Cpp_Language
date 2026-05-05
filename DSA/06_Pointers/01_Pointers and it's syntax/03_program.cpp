
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* p=&x;
    x=90;
    cout<<x<<endl;
    *p=9;
    cout<<x<<endl;
    cout<<*p;
}