#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    int health;
    int age;
    int score;
    int alive;

public:
  int sethealth(int health) {
      // Player::health = health;
      this->health = health;

  }
  int setage(int age) {
      this->age = age;
  }
  int setscore(int score ) {
     this->score = score;
  }
  bool setIsAlive(bool alive ) {
     this->alive = alive;
  }

  int gethealth() {
    return health;
  }
  int getscore() {
    return score;
  }
  int getage() {
    return age;
  }
  bool getIsAlive() {
    return alive;
  }
  };
int main() {
    Player harsh; //object creation,stastically
    Player raghav;
    Player *urvi = new Player;//pointer to object , run time,dynamic allocation
   // Player urvo = *urvi;
    harsh.setage(21);
    harsh.setscore(210);
    harsh.sethealth(2);
    harsh.setIsAlive(true);

    raghav.setage(212);
    raghav.setscore(790);
    raghav.sethealth(92);
    raghav.setIsAlive(true);
     
    //  urvo.setscore(40);
    //  urvo.setage(90);
    // cout<<urvo.getscore();

    // (*urvi).sethealth(10);
    // cout<<(*urvi).gethealth();

    urvi->sethealth(10);
    cout<<urvi->gethealth();


}