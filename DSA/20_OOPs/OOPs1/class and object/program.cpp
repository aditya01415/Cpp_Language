
#include<iostream>
using namespace std;

class Player{
public:
    int score;
    int health;
};

int main(){
    Player hariram;
    hariram.score=80;
    hariram.health=60;
    Player sayam;
    sayam.score=80;
    sayam.health=60;

    cout<<hariram.score<<endl;
    cout<<hariram.health<<endl;

    Player player[10];
    player[0]=hariram;
    player[1]=sayam;
    
}