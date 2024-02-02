#include<bits/stdc++.h>
using namespace std;
class Pokemon{
public:
  string name;
  int attack;
   Pokemon(string name,int attack) {
      this->name=name;
      this->attack=attack;
   }
};

    // void change(Pokemon pikachu) {
    //     pikachu.attack = 100;
    //     pikachu.name = "dragon";
    // }
    void change(Pokemon *pikachu) {
        pikachu->attack = 100;
       pikachu->name = "dragon";
    }
int main() {
    Pokemon pikachu("electric",87);
    cout<<pikachu.name<<" "<<pikachu.attack<<endl;
    change(&pikachu);
    cout<<pikachu.name<<" "<<pikachu.attack;
}