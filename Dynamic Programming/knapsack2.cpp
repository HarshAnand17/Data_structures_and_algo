#include<bits/stdc++.h>
using namespace std;

//vector<vector<int>>dp(105,vector<int>(100005,-1));
vector<vector<int>>dp;
int f(vector<int> &wts,vector<int> &val,int idx,int tv) {
    if(tv==0) return 0;
    if(idx==wts.size()) return INT_MAX;
    if(dp[idx][tv]!=-1) return dp[idx][tv];
    int ans=INT_MAX;
    ans=min(ans,f(wts,val,idx+1,tv));
    //pick
     if (val[idx] <= tv) {
        int weight = f(wts, val, idx + 1, tv - val[idx]);
        if (weight != INT_MAX) {
            ans = min(ans, wts[idx] + weight);
        }
    }
    return dp[idx][tv]=ans;
}

int fbu(vector<int> &wts,vector<int> &val,int tv,int W) {
    dp.resize(105,vector<int>(100005,INT_MAX));
    int n=wts.size();
    for(int i=0;i<dp.size();i++) {
        dp[i][0]=0;
    }
    for(int idx=n-1;idx>=0;idx--) {
        for(int j=0;j<=tv;j++) {
             int ans=INT_MAX;
             ans=min(ans,dp[idx+1][j]);
            //pick
            // if(val[idx]<=j) {
            //   ans=min(ans,wts[idx]+dp[idx+1][j-val[idx]]);
            // }

            if (val[idx] <= j) {
             int weight = dp[idx+1][j-val[idx]];
             if (weight != INT_MAX) {
              ans = min(ans, wts[idx] + weight);
            }
           }
            dp[idx][j]=ans; 
        }
    }

    int result=-1;
    for(int i=0;i<=n*1000;i++) {
        if(dp[0][i]<=W) result=i;
    }
   
    return result;
}
int main() {
    int n,W;
    cin>>n>>W;
    vector<int> wts,val;
    for(int i=0;i<n;i++) {
        int w,v;
        cin>>w>>v;
        wts.push_back(w);
        val.push_back(v);
    }

    // int result=-1;
    // for(int i=0;i<=n*1000;i++) {
    //     if(f(wts,val,0,i)<=W) result=i;
    // }
    //cout<<result<<"\n";
    cout<<fbu(wts,val,n*1000,W);
}