#include<bits/stdc++.h>
using namespace std;
class Bike{
    public:
    static int noOfBike;//this belong to the class
    int tyreSize;
    int engSize;
  
   // parameterised constructor
     Bike(int tyreSize,int engSize) {
        this->tyreSize = tyreSize;
        this->engSize= engSize;
        // Bike->noOfBike+=1;
        cout<<"constructor call hua\n";
    }
    // satic function
   static void increaseNoOfBikes() {
        noOfBike++;
    }
};
//static member
int Bike::noOfBike = 10;
  
int main() {
       Bike tvs(15,150);//object creation constructor ko call jaayegi
      
       Bike bmw(5,8);
       tvs.increaseNoOfBikes();
       cout<<tvs.noOfBike<<endl;
       cout<<bmw.noOfBike<<endl;
      bmw.increaseNoOfBikes();
       cout<<tvs.noOfBike<<endl;
        cout<<bmw.noOfBike<<endl;

      Bike::increaseNoOfBikes();
       cout<<tvs.noOfBike<<endl;
        cout<<bmw.noOfBike<<endl;        
}