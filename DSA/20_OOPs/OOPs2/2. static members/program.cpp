
#include<iostream>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;
    
    Bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }

    static void increaseNoOfBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main(){
    Bike tvs(12,100);
    Bike honda(13,150);
    Bike platina(15,300);
    tvs.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    honda.increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    platina.increaseNoOfBikes();
    cout<<platina.noOfBikes<<endl;
    cout<<tvs.tyreSize<<" " <<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" " <<honda.engineSize<<endl;
    cout<<platina.tyreSize<<" " <<platina.engineSize<<endl;

}