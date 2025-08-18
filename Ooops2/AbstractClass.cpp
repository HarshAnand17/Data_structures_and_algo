#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int engineSize;

    virtual void calculateMileage()=0;
    virtual void refuel()=0;
};
class Bike:public Vehicle{
    public:
    int handleSize;
    void calculateMileage() {
        cout<<"Bike ka call hua\n";
    }
    void refuel() {
        cout<<"refuel ka call hua";
    }
};
int main() {

    Bike b;
    b.calculateMileage();
    b.refuel();


}