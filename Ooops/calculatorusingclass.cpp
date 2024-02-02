#include<bits/stdc++.h>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    public:
    void add() {
        cout<<a+b<<endl;
    }
    void sub() {
        cout<<a-b<<endl;
    }
    void multiply() {
        cout<<a*b<<endl;
    }
    void division() {
        cout<<a/b<<endl;
    }
};
int main() {
    calculator calcii;
    calcii.a=10;
    calcii.b=12;
    calcii.add();
    calcii.sub();
}