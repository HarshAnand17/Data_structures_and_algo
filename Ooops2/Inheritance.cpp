#include<bits/stdc++.h>
using namespace std;
class Vehicle{//Base Class,Parent Class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    void showCompany() {
        cout<<companyName<<endl;
    }
    Vehicle() {
    cout<<"Vehicle ka constructor call hua\n";
   }
};
class Car : public Vehicle{//Car inherits vehicle
    public:
    int steeeringSize;
};
class Bike : public Vehicle{//Derived Class,child class
    public:
   int handleSize;
   Bike() {
    cout<<"Bike ka constructor call hua\n";
   }
};
int main() {
    Bike honda;
    honda.engineSize=5;
    honda.tyreSize=10;
    honda.handleSize=500;
    cout<<honda.engineSize<<endl;
    honda.companyName="Accenture";
    honda.showCompany();
}