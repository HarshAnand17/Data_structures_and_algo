#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>>dp;
 string ans;
    int f(string &t1,int i,string &t2,int j,string output) {
        if(output.size()>ans.size()) ans=output;
        if(i==t1.size() || j==t2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(t1[i]==t2[j]) return dp[i][j]=1+f(t1,i+1,t2,j+1,output+t1[i]);
        else  return dp[i][j]=max(f(t1,i+1,t2,j,output),f(t1,i,t2,j+1,output));   
    }
      
int main() {
    string s1,s2;
    cin>>s1>>s2;
    dp.resize(1005,vector<int>(1005,-1));
    f(s1,0,s2,0,"");
    cout<<ans;
}