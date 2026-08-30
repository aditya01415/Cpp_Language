

#include<iostream>
using namespace std;
class ComplexNumber{
  private:
   int pri;
  public:
    int real;
    int imaginary;
    
   friend ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2);

   friend class PrimeNumber;
    
};

ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2){
        ComplexNumber c3;
        c3.real=c1.real+c2.real;
        c3.imaginary=c1.imaginary+c2.imaginary;

        return c3;
}

class PrimeNumber{
    public:
      void show(ComplexNumber &c){
         c.pri=10;
      }
}

int main(){
     ComplexNumber a1,a2;
     a1.real=5;
     a1.imaginary=10;

     a2.real=10;
     a2.imaginary=5;

    ComplexNumber a3=a1+a2;
   
     cout<<"real-->"<<a3.real<<endl;
     cout<<"imaginary-->"<<a3.imaginary<<endl;
    
}