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
class B : protected A {//a_ka_protected,a_ka_public_as_protected
    public:
    int b_ka_public;
    void show(){
        a_ka_protected=5;
    }
    

};
class C :public B{ //b_ka_public as public,a_ka_protected,a_ka_public as protected
public:
    int c_ka_public;
      void show() {
        a_ka_protected=5;
      }
};
int main() {
   C c;
    c.c_ka_public;
   
}