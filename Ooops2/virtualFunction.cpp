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
class C:public Bike{
   public:
    void show() {
     cout<<"c ka show hu\n";
   }
};
int main() {
//    Bike *b;
//    b=new C;
//    b->show();

   Vehicle *a;
   a=new Bike;
   a->show();
   a=new Vehicle;
    a->show();
}