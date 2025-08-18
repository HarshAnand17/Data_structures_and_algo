#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    int health;
    int age;
    int score;
    bool alive;
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

    Harsh.setAge(20);
    Harsh.setHealth(100);
    Harsh.setScore(99);
    Harsh.setAlive(false);

    Raghav.setAge(20);
    Raghav.setHealth(100);
    Raghav.setScore(9);
    Raghav.setAlive(true);

    cout<<addScore(Harsh,Raghav)<<endl;

    //cout<<getMaxScore(Harsh,Raghav)<<endl;

    //  Player Sanket=getMaxScore(Harsh,Raghav);

    // cout<<Sanket.getAge()<<endl;
    //  cout<<Sanket.getHealth()<<endl;
    //  cout<<Sanket.getScore()<<endl;
    //  cout<<Sanket.getAlive()<<endl;
 }