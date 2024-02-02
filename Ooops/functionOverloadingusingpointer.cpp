#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public://can,t be access,can't be inherited
    int tyreSize;
    int engSize;
    int lights;
    string companyname;
   void show() {
      cout<<"Vehicle ka show";
   }
};
class Bike : public Vehicle {//a_ka_protected,a_ka_public_as_protected
    public:
    int handleSize;
    void show() {
       cout<<"Bike ka show";
    }   
};

int main() {
//   A *a;// object ka address store krta hai;
//   A a2;
//   a=&a2;
// B b;
// a=&b;

//compiler POV - Vehicle type ka hai
//runtime POV - Bike ka address hai
Bike b;
Vehicle *a;
a = &b;
//a->handleSize=10;
a->tyreSize=9;
a->show();
}