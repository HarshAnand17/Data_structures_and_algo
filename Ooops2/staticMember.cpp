#include<bits/stdc++.h>
using namespace std;
// void print() {
//     int b=10;
//     cout<<b<<endl;
//     b++;
// }
// void print() {
//     static int b=10;
//     cout<<b<<endl;
//     b++;
// }

class Bike {
    public:
    static int noOfBikes;
    int ts;
    int eg;
   
    Bike(int ts,int eg) {
        this->ts=ts;
        this->eg=eg;

       
    }
    static void setNoOfBikes() {
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main() {
   
    // print();
    // print();
    // print();

   Bike tvs(20,5);//object creation//constructor ko call hua
   Bike honda(10,2);//object creation//constructor ko call hua
   tvs.setNoOfBikes();
   cout<<tvs.noOfBikes<<endl;
   cout<<honda.noOfBikes<<endl;
   cout<<honda.ts<<" "<<honda.eg<<endl;

//    honda.setNoOfBikes();
//    cout<<tvs.noOfBikes<<endl;
//    cout<<honda.noOfBikes<<endl;

//    Bike::setNoOfBikes();
//    cout<<tvs.noOfBikes<<endl;
//    cout<<honda.noOfBikes<<endl;
  
}
