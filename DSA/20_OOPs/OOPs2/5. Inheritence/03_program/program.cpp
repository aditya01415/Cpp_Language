
#include<iostream>
using namespace std;

class A {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    // Constructor
    A() {
       cout<<"A ka Constructor";
       cout<<endl;
    }

   
};

class B : public A {
    public:
    B() {
       cout<<"B ka Constructor";
       cout<<endl;
    }
};

class C : public B {
    public:
C() {
       cout<<"C ka Constructor";
       cout<<endl;
    }
};


int main() {
   C c;
}
