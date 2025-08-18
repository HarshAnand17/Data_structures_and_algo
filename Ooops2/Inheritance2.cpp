#include<bits/stdc++.h>
using namespace std;
class A{
    private://can't be access ,can't be inherited
    int a_ka_private;
    protected:
    int a_ka_protected;//can't be access ,can be inherited
    public:
    int a_ka_public;//can be access,can be inherited
};
class B : protected A{
public:
  int b_ka_public;
  void show() {
    // a_ka_protected=10;
    // a_ka_public=20;

  }
};
int main() {
    A a;
    a.a_ka_public=10;
    B b;
   // b.b_ka_public=10;
    b.a_ka_public=10;
}