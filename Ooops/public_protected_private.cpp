#include<bits/stdc++.h>
using namespace std;
class A{
private://can,t be access,can't be inherited
    int a_ka_private;
protected:
    int a_ka_protected;//can,t be access,can be inherited
public:
     int a_ka_public;//can be access ,can be inherited
};
class B : private A {
    public:
    int b_ka_public;
    void show(){
        a_ka_protected=5;
    }
  

};
int main() {
     B b;
//    b.a_ka_public=5;
//     b.a_ka_protected;
   
}