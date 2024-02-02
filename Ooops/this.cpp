#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    int health;
    int age;
    int score;
    int alive;
public:
  void sethealth(int health) {
      // Player::health = health;
      this->health = health;
  }
  void setage(int age) {
      this->age = age;
  }
  void setscore(int score ) {
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
  int addscore(Player a,Player b) {
    return a.getscore() + b.getscore();
}

Player maxscore(Player a,Player b) {
    if(a.getscore()>b.getscore())  {
         return a;
    }
    else return b;
    
}
int main() {
    Player harsh; //object creation,stastically
    Player raghav;

    harsh.setage(21);
    harsh.setscore(210);
    harsh.sethealth(2);
    harsh.setIsAlive(true);

    raghav.setage(212);
    raghav.setscore(790);
    raghav.sethealth(92);
    raghav.setIsAlive(true);
     
    // cout<<addscore(harsh,raghav)<<endl;
    // cout<<maxscore(harsh,raghav).getscore();
     maxscore(harsh,raghav);
    Player sanket=maxscore(harsh,raghav);
     cout<<sanket.getscore()<<endl;
    cout<<sanket.gethealth()<<endl;
}