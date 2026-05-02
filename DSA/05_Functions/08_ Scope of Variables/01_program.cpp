
#include<iostream>
using namespace std;
void fun(int x=5, int y=10){
    cout<<x<<" "<<y<<endl;
}
int main(){
    fun(4,7);
    fun();
}