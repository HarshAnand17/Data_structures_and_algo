#include<bits/stdc++.h>
using namespace std;
// class Bike {
//     public:
//     int ts;
//     //by default constructor
//     Bike() {
//         cout<<"constructor call hua"<<endl;
//     }
// };

class Bike {
    public:
    int ts;
    int eg;
    //Parameterised constructor
    Bike(int ts,int eg) {
        this->ts=ts;
        this->eg=eg;

        cout<<"constructor call hua"<<endl;
    }
    ~Bike() {
       cout<<"destructor call hua"<<endl;
    }
};
int main() {
   Bike tvs(20,5);//object creation//constructor ko call hua
   Bike honda(10,2);//object creation//constructor ko call hua
   cout<<tvs.ts<<" "<<tvs.eg<<endl;
   cout<<honda.ts<<" "<<honda.eg<<endl;
}