
#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int age;
    int score;
    int alive;


    public:
    int getScore(){
       return score;
    }
    int getHealth(){
        return health;
    }
    int getAge(){
       return age;
    }
    int getAlive(){
        return alive;
    }
    void setScore(int score){
       this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    
    void setAge(int age){
       this->age=age;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
    
};


 
int main(){
    Player *urvi=new Player;

    (*urvi).setScore(40);
    urvi->setHealth(500);

    cout<<(*urvi).getScore()<<endl;
    cout<<urvi->getHealth();
}