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
   int n=23;
   int m=n;
   n=n|n>>1;
   n=n|n>>2;
   n=n|n>>4;
   n=n|n>>8;
   n=n|n>>16;
   cout<<(n+1)>>1;
}