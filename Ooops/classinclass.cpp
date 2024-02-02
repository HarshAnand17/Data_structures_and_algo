#include<bits/stdc++.h>
using namespace std;
class Gun{
    public:
    int ammo;
    int demage;
    int scope;
};

class Player{
    class helmet{
    int hp;
    int level;
   
   public:
   void sethp(int hp) {
    this->hp=hp;
   }
   void setlevel(int level) {
    this->level=level;
   }

   int gethp() {
    return hp;
   }
   int getlevel() {
    return level;
   }
    };  
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    helmet Helmet;
   
public:


  void setGun(Gun gun) {
    this->gun = gun;
  }
  Gun getgun() {
    return gun;
  }
     void sethelmet(int level) {
          helmet *Helmet = new helmet;
          Helmet->setlevel(level);
          int health;
           
           if(level == 1) health=25;
            else if(level == 2) health=50;
            else if(level == 3) health=100;
            else 
                cout<<"error";
                Helmet->sethp(health);
                this->Helmet = *Helmet;
     }
      void gethelmet() {
       cout<<Helmet.gethp()<<endl;
       cout<<Helmet.getlevel();
     }

  };
int main() {
      Player harsh;
    Player raghav;
    Gun akm;
    akm.ammo=100;
    akm.demage=110;
    akm.scope=200;
    harsh.setGun(akm);
    harsh.sethelmet(2);
    Gun awm;
    awm.ammo=160;
    awm.demage=10;
    awm.scope=20;
    raghav.setGun(awm);
    raghav.sethelmet(3);

    Gun gun123=harsh.getgun();
    cout<<gun123.demage<<endl;
    cout<<gun123.ammo<<endl;
    cout<<gun123.scope<<endl;
  
    cout<<endl;
    Gun gun1234=raghav.getgun();
    cout<<gun1234.demage<<endl;
    cout<<gun1234.ammo<<endl;
    cout<<gun1234.scope<<endl;
    cout<<endl;
    harsh.gethelmet();
    cout<<endl;
    cout<<endl;
    raghav.gethelmet();


}