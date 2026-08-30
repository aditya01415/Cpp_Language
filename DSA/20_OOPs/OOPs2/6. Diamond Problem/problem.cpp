/*
Diamond Problem
The Diamond Problem is a classic issue in multiple inheritance where ambiguity arises due to the presence of
two instances of a common base class within a complex inheritance hierarchy.

B derives A, C derives A
and D derives B+C.
Now D has 2 instances of A, causing ambiguity while accessing A's properties or methods.


*/

#include<iostream>
using namespace std;
class A{
    public:
    void showup(){
      cout<<"Class A"<<endl;
     }
};
class B:virtual public A{};
class C:virtual public A{};
class D:public B,public C{
    public:
    D(){
        showup();
        // B::showup();
        // C::showup();
    }
};
int main(){
  D d;
}