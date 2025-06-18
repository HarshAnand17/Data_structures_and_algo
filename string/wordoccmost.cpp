#include<bits/stdc++.h>
using namespace std;
int f(int x) {
   // cout<<"=="<<x<<endl;
    if(x==1) return 0;
    if(x==2 || x==3) return 1;
    return 1 + min({f(x-1),f(x/2),f(x/3)});
}
int main() {
    int n=10;
    cout<<f(n);
}