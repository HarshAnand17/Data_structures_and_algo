#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cout<<"Enter n : ";
   cin>>n;
   int ans=1;
   int p=1;
   while(n>0) {
     int r=n%2;
       ans=ans*10+r;
      // p*=10;
       n/=2;
   }
   cout<<ans;
}