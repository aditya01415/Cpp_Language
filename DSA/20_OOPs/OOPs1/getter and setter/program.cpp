
#include<iostream>
using namespace std;

class Player{
private:
    int score;
    int health;

public:
    int setScore(int s){
        score=s;
    }
    int setHealth(int h){
        health=h;
    }
    void getScore(){
       cout<<score<<endl;
    }
    void getHealth(){
        cout<<health<<endl;
    }
};

int main(){
    Player hariram;
   
    
   hariram.setScore(40);
   hariram.setHealth(80);
   hariram.getScore();
   hariram.getHealth();
}