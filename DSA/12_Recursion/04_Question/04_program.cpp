//Ques : Stair Path fo 2 jump and 3 jump

#include<iostream>
using namespace std;
int stair(int n){
    if(n==3) return 4;
    if(n==2) return 2;
    if(n==1) return 1;

    return stair(n-1)+(n-2)+stair(n-3);
}
int main(){
    int n;
    cout<<"Enter Stair Steps : ";
    cin>>n;
    cout<<"No. of Ways for climb step : "<<stair(n);
}