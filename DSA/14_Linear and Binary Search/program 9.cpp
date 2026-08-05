//sqrt(x);

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;

    int lo=0;
    int hi=x;
    bool flag=false;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(mid*mid==x) {
            cout<<mid;
            flag=true;
            break;
        }
        else if(mid*mid>x) hi=mid-1;
        else if(mid*mid<x) lo=mid+1;
    }
    if(!flag) cout<<hi;
    
}