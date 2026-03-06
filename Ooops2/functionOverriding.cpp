#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    string companyName;
    virtual void show() {
        cout<<"Vehicle wala hu\n";
    }
};
class Bike:public Vehicle{
    public:
    int handleSize;
    void show() {
        cout<<"Bike wala hua\n";
    }
};
int main() {
    //compiler POV-Vehicle wala type ka hai
    //runtime POV-Bike ka Address hai
    //compile time Binding
    //runtime Binding
    
    // Bike b;
    // Vehicle *a;
    // a=&b;
    // a->handleSize=10;
    // a->tyreSize=5;
    // a->show();
    

    // Vehicle v;
    // v.show();
    // Bike B;
    // B.show();
    // B.Vehicle::show();
    Vehicle *a;
    a=new Bike;
    a->show();
    a=new Vehicle;
    a->show();
}