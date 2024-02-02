#include<bits/stdc++.h>
using namespace std;
// int maxpower(int n) {
//    int temp;
//    while(n>0) {
//       temp=n;
//       n=n & (n-1);
//    }

//     return temp;
// }
// int main() {
//    cout<<maxpower(100);
// }

int main() {
   int n=100;
   int temp;
   while(n>0) {
      temp=n;
      n=(n)&(n-1);
   }
   cout<<temp*2;
}