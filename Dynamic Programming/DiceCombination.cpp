#include<bits/stdc++.h>
using namespace std;
vector<int>dp(1000005,-1);

// int fb(int n) {
//     dp[0]=1;
//     for(int k=1;k<=n;k++) {
//         int ans=0;
//         for(int i=1;i<=6;i++) {
//         if(i>k) break;
//         ans=ans+dp[k-i];
//        }
//        dp[k]=ans;
//     }
//     return dp[n];
// }

int fb(int n) {
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int sum=0;
    for(int i=1;i<=6;i++) {
        if(n-i<0) break;
        sum+=fb(n-i);
    }
    return dp[n]=sum;
}
int main() {
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<fb(n);
}