
#include<iostream> 
using namespace std;
class Vehicle{
   public:
     virtual void calculateMilage()=0;
     virtual void refuel()=0;
};

class Bike:public Vehicle{
    public:
    void calculateMilage(){
        cout<<"Calculate Milage"<<endl;
    }
    void refuel(){
        cout<<"Refuel"<<endl;
    }
};

int main(){
    Bike b;
    b.calculateMilage();    
    b.refuel();    
}