#include<bits/stdc++.h>
using namespace std;
class A{
    private://can't be access ,can't be inherited
    int a_ka_private;
    protected:
    int a_ka_protected;//can't be access ,can be inherited
    public:
    int a_ka_public;//can be access,can be inherited
    A() {
        cout<<"A ka constructor call hua\n";
    }
};
class B : protected A{//a_ka_protected,a_ka_public_as_protected
public:
  int b_ka_public;
  void show() {
   

  }
    
  B() {
        cout<<"B ka constructor call hua\n";
    }
};
class C:public B{//b_ka_public as public,a_ka_protected,a_ka_public_as_protected
    public:
    int c_ka_public;
    void show() {
      a_ka_public;
      a_ka_protected=10;
    }
};
int main() {
    // A a;
    // a.a_ka_public;
    // C c;
    // c.a_ka_public=10;
     C c;
    c.b_ka_public=10;

}