#include<bits/stdc++.h>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    void setScore(int s) {
        score = s;
    }
      int getScore() {
         return score;
      }
    void sethealth(int h) {
        health=h;
    }
    int gethealth() {
        return health;
    }
    
};
int main() {
   player harsh;
   harsh.score=5;
//   harsh.setScore(10);
//    cout<<harsh.getScore()<<endl;
//   harsh.sethealth(20);
//   cout<<harsh.gethealth();
}