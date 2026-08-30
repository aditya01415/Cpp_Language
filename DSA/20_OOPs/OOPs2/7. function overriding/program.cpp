
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Class A";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"Class B";
    }
};
int main(){
   B b;
   b.show()<<endl;
   b.A::show();
}