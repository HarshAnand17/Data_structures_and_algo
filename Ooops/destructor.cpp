#include<bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engSize;
     Bike(int tyreSize,int engsize) {
        this->tyreSize = tyreSize;
         this->engSize= engSize;
        cout<<"constructor call hua\n";
     }
     ~Bike() {
        cout<<"destructor call hua"<<endl;
     }
};
int main() {
       Bike tvs(12,11);//object creation constructor ko call jaayegi
       Bike honda(22,19);
       Bike suziki(37,17);
      bool flag=true;
       if(flag==true) {
            Bike bmw(17,1000);
            cout<<bmw.tyreSize<<" "<<bmw.engSize<<endl;
       }
      
       cout<<tvs.tyreSize<<" "<<tvs.engSize<<endl;
       cout<<honda.tyreSize<<" "<<honda.engSize<<endl;
       cout<<suziki.tyreSize<<" "<<suziki.engSize<<endl;
}