#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public://can,t be access,can't be inherited
    int tyreSize;
    int engSize;
   
//    void show() {
//       cout<<"Vehicle ka show\n";
//    }
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

int main() {

//compiler POV - Vehicle type ka hai
//runtime POV - Bike ka address hai
//compile time binding
//run time binding - virtual
//Bike b;
Vehicle a;
Bike b;
cout<<sizeof(a)<<endl; 
cout<<sizeof(b)<<endl; 
}