#include<bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engSize;
    //default constructor
    Bike(int tyreSize,int engSize) {
        cout<<"constructor call hua\n";
    }
    //parameterised constructor
    //  Bike(int tyreSize,int engSize) {
    //     this->tyreSize = tyreSize;
    //     this->engSize= engSize;
    //     cout<<"constructor call hua\n";
    // }
};
int main() {
       Bike tvs(32,44);//object creation constructor ko call jaayegi
       Bike honda(56,33);
       Bike suziki(54,11);
    //    cout<<tvs.tyreSize<<" "<<tvs.engSize<<endl;
    //    cout<<honda.tyreSize<<" "<<honda.engSize<<endl;
    //    cout<<suziki.tyreSize<<" "<<suziki.engSize<<endl;
    //   Bike a();
}