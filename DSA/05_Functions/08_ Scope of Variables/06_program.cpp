/*
Bonus Ques : Print the factorials of first n numbers
*/
#include<iostream>
using namespace std;

int fact(int x){
   int fact=1;
   for(int i=1;i<=x;i++){
         fact*=i;
   }
   return fact;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<"Factorial of "<<i<<" : "<<fact(i)<<endl;
    }
}