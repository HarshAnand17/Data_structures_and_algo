#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int a_ka_private;
    public:
    int a_ka_public;
    void show() {
        cout<<"Mai A ka show hu\n";
    }
};
class B:public A{
    public:
    int b_ka_public;
    void show() {
        cout<<"MAi B hu\n";
    }
};
int main() {
    A a;
    a.show();
    B b;
    b.show();
    b.A::show();

    //accessing through pointer
}