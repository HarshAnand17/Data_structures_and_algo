#include<bits/stdc++.h>
using namespace std;
vector<int>dp(1000005,-1);
// int f(int n) {
//     if(n==0) return 1;
//     if(dp[n]!=-1) return dp[n];
//     int ans=0;
//     for(int i=1;i<=6;i++) {
//         if(i>n) break;
//         ans=ans+f(n-i);
//     }
//     return dp[n]=ans;
// }

int fb(int n) {
    dp[0]=1;
    for(int k=1;k<=n;k++) {
        int ans=0;
        for(int i=1;i<=6;i++) {
        if(i>k) break;
        ans=ans+dp[k-i];
       }
       dp[k]=ans;
    }
    return dp[n];
}
int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<fb(n);
}