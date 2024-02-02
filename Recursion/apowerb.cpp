#include<bits/stdc++.h>
using namespace std;
int power(int a,int b) {
    if(b==0) return 1;
    if(b==1) return a;
    return a*power(a,b-1);
}
int main() {
    int a=3;
    int b=1;
    cout<<a<<" raised to power "<<b<<" is "<<power(a,b);
}