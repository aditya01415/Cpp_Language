/*
Ques : Take 3 numbers input and tell if they 
can be the sides of a triangle.
*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 sides of triangle : ";
    cin>>a>>b>>c;

    if((a + b > c) && (b + c > a) && (a + c > b)){
       cout <<"Yes";
    }else {
        cout<<"No";
    }

   
}