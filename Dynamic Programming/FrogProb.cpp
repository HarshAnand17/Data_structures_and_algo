
#include<bits/stdc++.h>
using namespace std;
// vector<int>h;
// int k;
// vector<int>dp;
// int f(int i) {
//   if(i>=h.size()) return INT_MAX;
//   if(i==h.size()-1) return 0;
//   if(dp[i]!=-1) return dp[i];
//   int ans=INT_MAX;
//   for(int j=1;j<=k;j++) {
//      if(i+j>=h.size()) break;
//      ans = min(ans,abs(h[i]-h[i+j])+f(i+j));
//   }
//   return dp[i]=ans;
// }
// int fbu() {
//   int n=h.size();
//   dp.resize(100005,INT_MAX);
//   dp[n-1]=0;
//   for(int i=n-2;i>=0;i--) {
//      for(int j=1;j<=k;j++) {
//      if(i+j>=h.size()) break;
//        dp[i] = min(dp[i],abs(h[i]-h[i+j])+dp[i+j]);
//   }
//   }
//   return dp[0];
// }
int fbt(vector<int>&h,int i) {
    if(i>=h.size()) {};
    if(i==h.size()-1) {};
    int ans=INT_MAX;
    for(int j=1;j<=k;j++) {
      ans=min(ans,abs(h[i]-h[i+j])+fbt(i+j))
    }

}
int main() {
  //dp.clear();
//  dp.resize(n+1,-1);
   int n;
   cin>>n>>k;
   h.resize(n);
   for(int i=0;i<n;i++) cin>>h[i];
   cout<<fbt(h,0);
   cout<<fbu();
   return 0;
}