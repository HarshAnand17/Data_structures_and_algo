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
    Player *urvi=new Player;
    //Player urviObject=*urvi;
    Harsh.setAge(20);
    Harsh.setHealth(100);
    Harsh.setScore(99);
    Harsh.setAlive(false);

    Raghav.setAge(20);
    Raghav.setHealth(100);
    Raghav.setScore(9);
    Raghav.setAlive(true);

//    urviObject.setScore(40);
//    urviObject.setAge(90);

//    cout<<urviObject.getScore()<<endl;
//    cout<<urviObject.getAge()<<endl;

//      (*urvi).setAge(30);
//      (*urvi).setScore(60);

//      cout<<(*urvi).getAge()<<endl;
//      cout<<(*urvi).getScore();


     urvi->setAge(130);
     urvi->setScore(260);

     cout<<urvi->getAge()<<endl;
     cout<<urvi->getScore();
 }