#include<bits/stdc++.h>
using namespace std;
class A{
private://can,t be access,can't be inherited
    int a_ka_private;
public:
     int a_ka_public;//can be access ,can be inherited
     A() {
        cout<<"A constructor call ho raha hai\n";
     }
};
class B :virtual public A {
    public:
    int b_ka_public;
    B() {
        cout<<" B constructor call ho raha hai\n";
     }
    

};
class C :virtual public A{ 
public:
    int c_ka_public;
      C() {
        cout<<" C constructor call ho raha hai\n";
     }
     
};
class D : public B,public C{
public:
    int d_ka_public;
    //  void sow(){
    //     cout<<B::a_ka_public;
    //  }
     void show(){
        cout<<a_ka_public;
     }
     
};
int main() {
 D d;
 d.a_ka_public = 10;
 d.show();
   
}