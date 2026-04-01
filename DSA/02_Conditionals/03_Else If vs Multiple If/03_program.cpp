// Ques : If cost price and selling price of an item is 
// input through the keyboard, write a program to 
// determine whether the seller has made profit or 
// incurred loss. Also determine how much profit he 
// made or loss he incurred. 

#include<iostream>
using namespace std;
int main(){
  float cp,sp,profit;

  cout<<"Enter cost price : ";
  cin>>cp;
  cout<<"Enter sell price : ";
  cin>>sp;

  if(sp>cp){
     cout<<"Profit ";
  } 
  if(cp>sp){
    cout<<"loss ";
  }

  if(sp==cp){
    cout<<"No Profit No loss";
  }
}