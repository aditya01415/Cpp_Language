/*
Ques  : Create a class “cricketer” that contains name of 
cricketer, his age, number of test matches that he has played 
and the average runs that he has scored in each test match. 
Create an array of data type “cricketer” to hold records of 20 
such cricketers and then write a program to read these records

*/

#include<iostream>
using namespace std;
class Cricketer{
  public:
    string name;
    int age;
    int numOfTestMatch;
    int averageRuns;
};
int main(){
  Cricketer player1;
  player1.name="Virat Kohli";
  player1.age=36;
  player1.numOfTestMatch=266;
  player1.averageRuns=68;

  Cricketer player2;
  player2.name="Rohit Sharma";
  player2.age=43;
  player2.numOfTestMatch=116;
  player2.averageRuns=60;

  Cricketer cricketers[2]={player1,player2};
  cout<<"name: "<<cricketers[0].name<<endl;
  cout<<"age: "<<cricketers[0].age<<endl;
  cout<<"number of test match: "<<cricketers[0].numOfTestMatch<<endl;
  cout<<"average runs : "<<cricketers[0].averageRuns<<endl;
  cout<<endl;
  cout<<"name: "<<cricketers[1].name<<endl;
  cout<<"age: "<<cricketers[1].age<<endl;
  cout<<"number of test match: "<<cricketers[1].numOfTestMatch<<endl;
  cout<<"average runs : "<<cricketers[1].averageRuns<<endl;
  cout<<endl;

}