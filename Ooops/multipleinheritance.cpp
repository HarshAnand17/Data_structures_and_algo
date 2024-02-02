#include<bits/stdc++.h>
using namespace std;
class A{
private://can,t be access,can't be inherited
    int a_ka_private;
protected:
    int a_ka_protected;//can,t be access,can be inherited
public:
     int a_ka_public;//can be access ,can be inherited
     A() {
        cout<<"A constructor call ho raha hai\n";
     }
};
class B : protected A {//a_ka_protected,a_ka_public_as_protected
    public:
    int b_ka_public;
    B() {
        cout<<" B constructor call ho raha hai\n";
     }
    

};
class C :public B,public A{ //b_ka_public as public,a_ka_protected,a_ka_public as protected
public:
    int c_ka_public;
      C() {
        cout<<" C constructor call ho raha hai\n";
     }
     
};
int main() {
C c;
   
}