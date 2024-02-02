#include<bits/stdc++.h>
using namespace std;
class Vehicle{// Base class,Parents class
public:
     int tyreSize;
    int engSize;  
    int lights; 
     string companyName;

      Vehicle() {
        cout<<"vehicle ka constructor call hua\n";
    }

    void showCompany() {
        cout<<companyName<<endl;
    }
};
 class car : public Vehicle{//car inherits Vehicle
    public:
    int streeringSize;
  
};
class Bike : public Vehicle{// Derived class,child Class
    public:
    int handleSize;
    Bike() {
        cout<<"bike ka constructor call hua\n";
    }
 
};
int main() {
     Bike honda;
     honda.handleSize = 5;
     honda.tyreSize = 10;
     honda.engSize = 400;
      cout<<honda.tyreSize<<endl;
    //  honda.companyName = "Honda";
    // honda.showCompany();

}