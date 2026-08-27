#include<iostream>
using namespace std;

class Gun{
public:
   int ammo;
   int damage;
   int scope;
};

class Player{
    private:
      class Helmet{
          int hp;
          int level;

        public:
          void setHp(int hp){
            this->hp=hp;
          }
          void setLevel(int level){
            this->level=level;
          }
          int getHp(){
            return hp;
          }
          int getLevel(){
            return level;
          }
      };
    int health;
    int age;
    int score;
    int alive;
    Gun gun;
    Helmet helmet;

    public:
      int getHealth(){
        return health;
      }
      int getAge(){
        return age;
      }
      int getScore(){
        return score;
      }
      int getAlive(){
        return alive;
      }
      Gun getGun(){
        return gun;
      }
      void setHealth(int health){
        this->health=health;
      }
      void setAge(int age){
        this->age=age;
      }
      void setScore(int score){
        this->score=score;
      }
      void setAlive(int alive){
        this->alive=alive;
      }
      void setGun(Gun gun){
        this->gun=gun;
      }

      void setHelmet(int level){
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);
        int health;

        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"error :: Invalid level";

        helmet->setHp(health);
        this->helmet=*helmet;
        
      }

      Helmet getHelmet(){
        return helmet;
      }
};
int main(){
    Player player1;
    Player player2;
    Gun akm;
    akm.ammo=40;
    akm.damage=80;
    akm.scope=6;

    player1.setAge(21);
    player1.setHealth(80);
    player1.setScore(60);
    player1.setAlive(true);
    player1.setGun(akm);
    player1.setHelmet(2);


    Gun awm;
    awm.ammo=5;
    awm.damage=400;
    awm.scope=8;
    player2.setAge(22);
    player2.setHealth(90);
    player2.setScore(80);
    player2.setAlive(true);
    player2.setGun(awm);
    player2.setHelmet(3);

    Gun gun1=player1.getGun();
    cout<<"player 1 ammo : "<<gun1.ammo<<endl;
    cout<<"player 1 damage : "<<gun1.damage<<endl;
    cout<<"player 1 scope : "<<gun1.scope<<endl;
    Gun gun2=player2.getGun();
    cout<<"player 2 ammo : "<<gun2.ammo<<endl;
    cout<<"player 2 damage : "<<gun2.damage<<endl;
    cout<<"player 2 scope : "<<gun2.scope<<endl;
    cout<<endl;
   
}