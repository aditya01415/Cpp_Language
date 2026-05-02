
#include<iostream>
using namespace std;

void fun(int x, int y){
     cout<<"address of fun function : "<<&x<<endl;
    cout<<"address of fun function : "<<&y<<endl;

}
int main(){
    int x=3,y=7;
    cout<<"address of main function : "<<&x<<endl;
    cout<<"address of main function : "<<&y<<endl;

    fun(x,y);
}