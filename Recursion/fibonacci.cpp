#include<bits/stdc++.h>
using namespace std;
// int fibo2(int n) {
//      int a=1,b=1,s=0;
//      while() {
//         s=a+b;
//         a=b;
//         b=s;
//      }
//      return a;
// }
int fibo(int n) {
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
// int fibo(int n) {
//     if(n==1 || n==2) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
int main() {
    // for(int i=1;i<=8;i++) {
    // cout<<fibo(i)<<" ";

    // }
    cout<<fibo(8);
}