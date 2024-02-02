#include<bits/stdc++.h>
using namespace std;
class Bike {
    public:
    
    int tyreSize;
    int engSize;
  
   // parameterised constructor
     Bike(int ts,int es = 200): tyreSize(ts),engSize(es)  {
        
    }

};
int main() {
       Bike tvs(15,150);//object creation constructor ko call jaayegi
      
       Bike bmw(5,8);
       //tvs.increaseNoOfBikes();
      cout<<tvs.tyreSize<<" "<<tvs.engSize<<endl;
      cout<<bmw.tyreSize<<" "<<bmw.engSize<<endl;
      
    
}