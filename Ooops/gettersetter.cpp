#include<bits/stdc++.h>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    void setScore(int score) {
        this->score=score;
    }
    int getScore() {
         return this->score;
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
   harsh.setScore(10);
   cout<<harsh.getScore()<<endl;
//   harsh.sethealth(20);
//   cout<<harsh.gethealth();
}