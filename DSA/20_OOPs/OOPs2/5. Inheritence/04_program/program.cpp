
#include<iostream>
using namespace std;

class A {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
};

class B : protected A {  
    public:
    B() {
       protectedVar=10;
       publicVar=20;
    }
};

class C : public B {
    public:
     int cPubVar;
C() {
      protectedVar=20;
      publicVar=20;
    }
};


int main() {
   C c;
   c.cPubVar=20;
}
