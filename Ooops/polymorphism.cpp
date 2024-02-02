#include<bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engSize;
   // construction overloading
   Bike(int ts,int es):tyreSize(ts),engSize(es){}
   Bike(int ts):tyreSize(ts),engSize(100){}
   Bike():tyreSize(10),engSize(15){}
  
};
//fn overloading
 void add(int a,int b) {
    cout<<a+b<<endl;
 }
 void add(int a,int b) {
    cout<<10+a<<endl;
 }
int main() {
       Bike tvs(15,150);
      
       Bike bmw(8);
      
     add(1,2);
     add(5,5.2);
      
    
}