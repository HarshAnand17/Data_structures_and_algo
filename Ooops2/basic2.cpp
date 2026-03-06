#include<bits/stdc++.h>
using namespace std;

class player{
   private:
   int score;
   int health;
   public:
   void setHealth(int h) {
      health=h;
   }
   int getHealth() {
     return health;
   }
   void setScore(int s) {
       score=s;
    }
    int getScore() {
     return score;
    }
};

class Calculator {
      private:
      int a;
      int b;
      public:
      void add() {
            cout<<a+b<<endl;
      }
      void subtract() {
            cout<<a-b;
      }


};

int main() {
      player Harsh;
      // Harsh.score=90;
      // Harsh.health=100;
      // Harsh.showHealth();
      // Harsh.showScore();

      Harsh.setHealth(10);
      cout<<Harsh.getHealth()<<endl;
      Harsh.setScore(20);
      cout<<Harsh.getScore();
    //   Calculator calci;
    //   calci.a=10;
    //   calci.b=7;
    //   calci.add();
    //   calci.subtract();


}