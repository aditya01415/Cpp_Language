//runtime binding (when we declare virtual function or method on any function on class)


#include<iostream> 
using namespace std;
class Vehicle{
   public:
    virtual void show(){
        cout<<"Vehicle Show"<<endl;
    }
};

class Bike:public Vehicle{
    public:
    void show(){
        cout<<"Bike Show"<<endl;
    }
};
int main(){

    //compiler POV : Vehicle type ka hai
    //compile time binding(when we don't declare virtual func then we run only what we called)
    //runtime binding (when we declare virtual function or method on any function on class)
    //runtime pov : Bike ka address hai
     Bike b;
     Vehicle *a;
     a=&b;
     a->show();
     a=new Bike;
     a->show();
}