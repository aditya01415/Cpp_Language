
#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;

    //constructor overloading
    
    Bike(int ts,int es): tyreSize(ts),engineSize(es){}
    Bike(int ts): tyreSize(ts),engineSize(120){}
    Bike(): tyreSize(12),engineSize(100){}

};
void calculateArea(int l,int h){
    cout<<l*h<<endl;
}
void calculateArea(int s){
    cout<<s*s<<endl;
}
int main(){
    Bike tvs(12,100);
    Bike honda(13,150);
    Bike platina(15,300);
  
    cout<<tvs.tyreSize<<" " <<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" " <<honda.engineSize<<endl;
    cout<<platina.tyreSize<<" " <<platina.engineSize<<endl;

}