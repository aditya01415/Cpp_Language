
#include<iostream>
using namespace std;

class Player{
public:
    int score;
    int health;

    void showScore(){
        cout<<"Score is : "<<score;
    }
    void showHealth(){
        cout<<"Health is : "<<health;
    }
};

class Calculator{
public:
    int a;
    int b;

    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};

int main(){
    Player hariram;
    hariram.score=80;
    hariram.health=60;
    
    hariram.showScore();
    cout<<endl;
    hariram.showHealth();
    cout<<endl;
    Calculator cal1;
    cal1.a=10;
    cal1.b=7;

    cal1.add();
    cal1.subtract();
}