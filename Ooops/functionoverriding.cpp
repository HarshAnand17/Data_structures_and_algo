#include<bits/stdc++.h>
using namespace std;
class A{
private://can,t be access,can't be inherited
    int a_ka_private;
public:
     int a_ka_public;//can be access ,can be inherited
   void show() {
      cout<<"main A  hu\n";
   }
};
class B : public A {//a_ka_protected,a_ka_public_as_protected
    public:
    int b_ka_public;
       void show() {
         cout<<"main B hu\n";
       }
};

int main() {
//   B b;
//   b.show();

   
   // A a;
   // a.show();

B b;
b.A::show();

 
}