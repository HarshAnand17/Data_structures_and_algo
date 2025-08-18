#include<bits/stdc++.h>
using namespace std;
class A{
    private://can't be access ,can't be inherited
    int a_ka_private;
    public:
    int a_ka_public;//can be access,can be inherited
};
class B : virtual public A{//a_ka_protected,a_ka_public_as_protected
public:
  int b_ka_public;
  void show() {
   

  }
};
class C:virtual public A{
    int c_ka_public;
};
class D:public B,public C{
    public:
    int d_ka_public;
    void show() {
        //cout<<C::a_ka_public;
        cout<<a_ka_public<<endl;
    }
};
int main() {
    D d;
    d.a_ka_public=10;
    d.show();
}