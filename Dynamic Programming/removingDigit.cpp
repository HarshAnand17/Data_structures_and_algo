#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
vector<int>get_digit(int n) {
    vector<int>d;
    while(n>0) {
        if(n%10!=0) d.push_back(n%10);
        n/=10;
    }
    return d;
}
int f(int n) {
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d=get_digit(n);
    int result=INT_MAX;
    for(int i=0;i<d.size();i++) {
        result=min(f(n-d[i]),result);
    }
    return dp[n]=1+result;
}

int fbu(int num) {
    dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;
    for(int n=10;n<=num;n++) {
         vector<int>d=get_digit(n);
         dp[n]=INT_MAX;
         for(int i=0;i<d.size();i++) {
           dp[n]=min(dp[n],dp[n-d[i]]);
        }
        dp[n]=1+dp[n];
   }
   return dp[num];
}
int main() {
   int n;
   cin>>n;
   dp.resize(1000005,-1);
   cout<<fbu(n);
  // cout<<f(n)<<endl;
}