#include<bits/stdc++.h>
using namespace std;
// int f(int a,int b) {
//     if(b==1) return a;
//     if(b%2!=0) return a*f(a,b/2)*f(a,b/2);
//     return f(a,b/2)*f(a,b/2);
// }
int rev(int n) {
    static int ans=0;
    if(n==0) return ans;
    ans=ans*10+(n%10);
    return rev(n/10);
}
int main() {
    // int a,b;
    // cout<<"enter a and b : ";
    // cin>>a>>b;
    // cout<<f(a,b);
   int n=6934510;
   cout<<rev(n);
}