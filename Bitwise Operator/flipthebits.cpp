#include<bits/stdc++.h>
using namespace std;

int main() {
  
//    int n=23;
//    int m=n;
//     n=n|(n>>1);
//     n=n|(n>>2);
//     n=n|(n>>4);
//     n=n|(n>>8);

//    int  y=m^n;
//     cout<<y;

    int n=23;
    int temp;
    int x=n;
   while(n>0) {
      temp=n;
      n=(n)&(n-1);
   }
   temp=(temp<<1)-1;

   int y=temp^x;
    cout<<y;
}