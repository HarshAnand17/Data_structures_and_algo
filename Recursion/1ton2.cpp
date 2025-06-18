#include<bits/stdc++.h>
using namespace std;
vector<int>digits(int n) {
      vector<int>ans;
      while(n!=0) {
         if(n%10!=0) ans.push_back(n%10);
         n/=10;
      }
      return ans;
}
int f(int n) {
      vector<int>dp(n,INT_MAX);
      dp[0]=0;
      for(int i=1;i<=9;i++) dp[i]=1;
      
      for(int i=10;i<=n;i++) {
            vector<int>d=digits(i);
            for(int j=0;j<d.size();j++) {
                  dp[i]=min(dp[i],dp[i-d[j]]);
            }
            dp[i]=1+dp[i];
     }
   return dp[n];
}
int main() {
    int n=27;
    cout<<f(n);
}