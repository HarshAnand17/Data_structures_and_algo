#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public://can,t be access,can't be inherited
    int tyreSize;
    int engSize;
    int lights;
    string companyname;
   virtual void calculatorMilege() = 0;
   virtual void refual() = 0;
};
class Bike : public Vehicle {//a_ka_protected,a_ka_public_as_protected
    public:
    int handleSize;
    // void show() {
    //    cout<<"Bike ka show";
    // }   
    void calculatorMilege() {
       cout<<"Bike ka show";
    }   
    void refuel() {
       cout<<"Bike ka show";
    }   
};

int main() {

// Vehicle v;
// v.calculatorMilege();

// Bike b;
// b.calculatorMilege();

}