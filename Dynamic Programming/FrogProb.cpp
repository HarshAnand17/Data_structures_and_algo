#include<bits/stdc++.h>
using namespace std;
 vector<int>h;
 int k;
 int n;
 vector<int>dp;
// int fbt(int i) {
//     if(i==n-1) return 0;
//     if(i>n-1) return INT_MAX;
//     if(dp[i]!=-1) return dp[i];
//     int ans=INT_MAX; 
//     for(int j=1;j<=k;j++) {
//       if(i+j<n){
//           ans=min(ans,abs(h[i]-h[i+j])+fbt(i+j));
//         }
//       }
//       return dp[i]=ans;
//     }
// int fbu() {
//     dp.resize(100005,INT_MAX);
//     dp[n-1]=0;
//     for(int i=n-2;i>=0;i--) {
//       for(int j=1;j<=k;j++) {
//          if(i+j<n) {
//            dp[i]=min(dp[i],abs(h[i]-h[i+j])+dp[i+j]);
//          }
//       }
//     }
//     return dp[0];
//}

int fbu() {
  dp.resize(100005,INT_MAX);
  dp[n-1]=0;
  for(int i=n-2;i>=0;i--) {
     for(int j=1;j<=k;j++) {
     if(i+j>=h.size()) break;
       dp[i] = min(dp[i],abs(h[i]-h[i+j])+dp[i+j]);
  }
  }
  return dp[0];
}
int main() {
   cin>>n>>k;
  //  dp.clear();
  //  dp.resize(n+1,-1);
  //  h.resize(n);
   for(int i=0;i<n;i++) cin>>h[i];
   //cout<<fbt(0);
   cout<<fbu();
   return 0;
}