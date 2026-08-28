
#include<iostream>
using namespace std;

class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    void showCompany(){
        cout<<companyName<<endl;
    }

    Vehicle(){
        cout<<"Vehicle Constructor is Call";
        cout<<endl;
    }
};
class Car:public Vehicle{
    public:
    int steeringSize;
};
class Bike:public Vehicle{
    public:
    int handleSize;
    Bike(){
        cout<<"Bike Constructor is Call";
        cout<<endl;
    }
};

int main(){
    Bike honda;
    honda.tyreSize=10;
    honda.engineSize=40;
    honda.lights=50;
    honda.companyName="honda";
    cout<<honda.engineSize<<endl;;
    honda.showCompany();
}