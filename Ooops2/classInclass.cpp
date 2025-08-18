#include<bits/stdc++.h>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
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
};
int addScore(Player a,Player b) {
    return a.getScore()+b.getScore();
}

Player getMaxScore(Player a,Player b) {
      if(a.getScore()>b.getScore()) {
        return a;
      }
      else return b;
}
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
    
    Gun awm;
    awm.ammo=10;
    awm.damage=40;
    awm.scope=50;
    Raghav.setAge(20);
    Raghav.setHealth(100);
    Raghav.setGun(awm);
    Raghav.setScore(9);
    Raghav.setAlive(true);


    cout<<Sanket.getAge()<<endl;
     cout<<Sanket.getHealth()<<endl;
     cout<<Sanket.getScore()<<endl;
     cout<<Sanket.getAlive()<<endl;
 }