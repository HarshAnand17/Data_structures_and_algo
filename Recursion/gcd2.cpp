#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b) {
    if(a==0) return b;
    return hcf(b%a,a);
}
int main() {
    int a=27;
    int b=45;
    cout<<hcf(min(a,b),max(a,b));
}