#include<bits/stdc++.h>
using namespace std;

void add(int a,int b) {
    cout<<a+b<<endl;
}
// // int add(int a,int b) {
// //     return a+b;
// }
void add(int a,double b) {
    cout<<10+a<<endl;
}

constructor overloading
class Bike{
    public:
    int tse;
    int ese;
    //contructor overloading,initialization list
    Bike(int ts,int es) :tse(ts),ese(es) {}
    Bike(int ts) :tse(ts) {};
    Bike() :tse(ts),ese(es) {};
}
 
int main() {
    add(1,5);
    //cout<<add(1,13);
    add(1,9);
}