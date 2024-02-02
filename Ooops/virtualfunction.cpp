#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public://can,t be access,can't be inherited
    int tyreSize;
    int engSize;
    int lights;
    string companyname;
  virtual void show() {
      cout<<"Vehicle ka show\n";
   }
};
class Bike : public Vehicle {//a_ka_protected,a_ka_public_as_protected
    public:
    int handleSize;
    void show() {
       cout<<"Bike ka show\n";
    }   
};

class C : public Bike{
    public:
     void show() {
        cout<<"c ka show\n";
     }
};

int main() {

//compiler POV - Vehicle type ka hai
//runtime POV - Bike ka address hai
//compile time binding
//run time binding - virtual
//Bike b;
Vehicle *a;
//a = &b;
//a->handleSize=10;
a->tyreSize=9;
a = new Bike;
a->show();
a = new Vehicle;;
a->show();
Bike *b;
b = new C;
b->show();
}