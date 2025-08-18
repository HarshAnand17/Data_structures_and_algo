#include<bits/stdc++.h>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    public:
    class Helmet{
        int hp;
        int level;
    
        public:
        void setHp(int hp) {
            this->hp=hp;
        }
        void setLevel(int level) {
            this->level=level;
        }
        int getHp(){
            return hp;
        }
        int getLevel() {
            return level;
        }
    };
    public:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

    public:
    void setHealth(int health) {
        this->health=health;
    }
    void setAge(int age) {
        this->age=age;
    }
    void setScore(int score) {
        this->score=score;
    }
    void setAlive(bool alive) {
        this->alive=alive;
    }
    void setGun(Gun gun) {
       this->gun=gun;
    }

    int getHealth() {
        return health;
    }
    int getScore() {
        return score;
    }
    int getAge() {
        return age;
    }
    int getAlive() {
        return alive;
    }

    Gun getGun() {
        return gun;
    }

    void setHelmet(int level) {
        Helmet *helmet=new Helmet;
        helmet->setLevel(level);

        int health=0;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=100;
        else cout<<"error,invalid level";
        helmet->setHp(health);

        this->helmet=*helmet;

    }
    // Helmet getHelmet() {
    //     return helmet;
    // }

    void getHelmet() {
         cout<< helmet.getHp()<<endl;
         cout<<helmet.getLevel();
    }
};



int main() {
    Player Harsh;
    Player Raghav;
    
    Gun akm;
    akm.ammo=100;
    akm.damage=20;
    akm.scope=2;
    Harsh.setAge(20);
    Harsh.setHealth(100);
    Harsh.setGun(akm);
    Harsh.setScore(99);
    Harsh.setAlive(false);
    Harsh.setHelmet(2);
    
    Gun awm;
    awm.ammo=10;
    awm.damage=40;
    awm.scope=50;
    Raghav.setAge(20);
    Raghav.setHealth(100);
    Raghav.setGun(awm);
    Raghav.setScore(9);
    Raghav.setAlive(true);
    Raghav.setHelmet(5);

    Gun gun123=Harsh.getGun();
    // cout<<gun123.ammo<<endl;
    // cout<<gun123.damage<<endl;
    // cout<<gun123.scope<<endl;

    // Helmet helmet123=Harsh.getHelmet();
    // cout<< helmet123.getHp()<<endl;
    // cout<<helmet123.getLevel();
     Harsh.getHelmet();
 }