
#include<iostream>
#include<cmath>
using namespace std;

int mini(int a,int b){
    int c;
    if(a<b) c=a;
    else c=b;

    return c;
}
int minimum(int a,int b){
    if(a<b) return a;
    else return b;
}

int main(){
    int x,y;
    // cin>>x>>y;
    // if(x<y) cout<<x;
    // else cout<<y;
    // cout<<min(x,y);
    // cout<<mini(x,y);
    // cout<<minimum(x,y);
    // cout<<max(x,y);
    cout<<sqrt(7);
}