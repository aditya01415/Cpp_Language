//sqrt(x);

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    for(int i=0;i<=x/2;i++){
        if(i*i==x){
            cout<<i;
            break;
        }
    }
}