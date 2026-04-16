/*
Ques : Two numbers are entered through the 
keyboard. Write a program to find the value of one 
number raised to the power of another.
*/

#include<iostream>
using namespace std;
int main(){
      int a,b;
      cout<<"Enter two number : ";
      cin>>a>>b;
      float pow=1;
      bool flag=true;
      if(b<0){
        flag=false;
        b=-b;
      }
      for(int i=1;i<=b;i++){
        pow*=a;
      }

      if(!flag){
        pow=1/pow;
        b=-b;
      }

      if(a==0 && b==0) cout<<"Not defined";
      else cout<<a<<" raised to the power of "<<b<<"is : "<<pow;
}
