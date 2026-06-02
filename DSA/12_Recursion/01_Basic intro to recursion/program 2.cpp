#include<iostream>
using namespace std;
// void fun(){
//     cout<<"Good Morning !"<<endl;
//     fun();
// }
void fun(int n){
    if(n==0) return;
    cout<<"Good Morning !"<<endl;
    fun(n-1);
}

int main(){
    fun(4);
}