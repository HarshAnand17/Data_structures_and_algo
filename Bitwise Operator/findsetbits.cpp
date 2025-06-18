#include<bits/stdc++.h>
using namespace std;
int countbits(int n) {

   // int count=0;
   // while(n>0) {
   //    count++;
   //    n=n&(n-1);
   // }
   // return count;
   int count=0;
   while(n>0) {
      n=n&(n-1);
      count++;
   }
   return count;
}
int countbits2(int n) {
   //return _builtin_popcount(n);
   return __builtin_popcount(n);
}
int main() {
    cout<<countbits(92)<<endl;
    cout<<countbits2(92);
}
