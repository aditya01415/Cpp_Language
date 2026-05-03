
#include<iostream>
using namespace std;

int max(int a,int b,int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
   
}
int main(){
    int a;
    cout<<"Enter 1st number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number : ";
    cin>>b;
    int c;
    cout<<"Enter 3rd number : ";
    cin>>c;
    
    cout<<max(a,b,c);
    
}