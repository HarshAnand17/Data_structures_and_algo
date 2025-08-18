#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int a_private=10;
    public:
    friend void show(A &a);
    // void show2(A &a){
    //     cout<<a_private;
    // }
};
void show(A &a) {
     cout<<a.a_private<<endl;
}
int main() {
    A a;
    show(a);
}