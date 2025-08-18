#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int engineSize;
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
    Vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
}