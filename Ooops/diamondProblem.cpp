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
class B : virtual public A {//a_ka_protected,a_ka_public_as_protected
    public:
    int b_ka_public;
    B() {
        cout<<" B constructor call ho raha hai\n";
     }
    

};
class C :virtual public A{ //b_ka_public as public,a_ka_protected,a_ka_public as protected
public:
    int c_ka_public;
      C() {
        cout<<" C constructor call ho raha hai\n";
     }
     
};
class D : public B,public C{ //b_ka_public as public,a_ka_protected,a_ka_public as protected
public:
    int d_ka_public;
    //  void sow(){
    //     cout<<B::a_ka_public;
    //  }
     void sow(){
        cout<<a_ka_public;
     }
     
};
int main() {
D d;
 d.a_ka_public = 10;
 d.sow();
   
}