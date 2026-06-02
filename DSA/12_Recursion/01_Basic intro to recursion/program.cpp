#include<iostream>
using namespace std;
void greet(){
    cout<<"Good Morning ! "<<endl;
    cout<<"How Are You ! ";
}
int product(int a,int b){
    return a*b;
}
int main(){
    cout<<product(4,2)<<endl;
    int x=product(6,2);
    cout<<x<<endl;
    greet();
    cout<<endl;
    int a=10;
    int b=20;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

}