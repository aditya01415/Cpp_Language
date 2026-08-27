
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

int add(int a,int b){
    return a+b;
}
int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}

Player getMaxPlayerScore(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
 
int main(){
    Player harsh; //object creation staticlly
    Player raghav;

    harsh.setAge(21);
    harsh.setHealth(80);
    harsh.setScore(60);
    harsh.setAlive(true);

    raghav.setAge(22);
    raghav.setHealth(90);
    raghav.setScore(80);
    raghav.setAlive(true);

    cout<<add(20,32)<<endl;
    cout<<addScore(harsh,raghav)<<endl;

    Player player3=getMaxPlayerScore(harsh,raghav);
    cout<<player3.getScore();
}