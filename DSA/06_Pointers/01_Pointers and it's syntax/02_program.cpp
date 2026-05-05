
#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* p=&x;
    
    cout<<&x<<endl;
    cout<<p<<endl;

    float x1=5.9;
    float* p1=&x1;
    
    cout<<&x1<<endl;
    cout<<p1<<endl;
    char x2='a';
    char* p2=&x2;
    
    cout<<&x2<<endl;
    cout<<p2<<endl;
    bool x3=true;
    bool* p3=&x3;
    
    cout<<&x3<<endl;
    cout<<p3<<endl;
}