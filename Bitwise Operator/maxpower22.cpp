#include<bits/stdc++.h>
using namespace std;

int main() {
  
   int n=23;
   int m=n;
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);

   int  y=m^n;
    cout<<y;

}