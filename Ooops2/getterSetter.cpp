#include<bits/stdc++.h>
using namespace std;
class Pokemon{
    private:
    int attack;
    public:
    string type;
    void set(int val) {
        attack=val;
    }
     int get() {
        return attack;
     }
};

int main() {
   Pokemon pikachu;
   pikachu.type="electric";
   cout<<pikachu.type<<endl;
   pikachu.set(70);
  cout<<pikachu.get();
   
}