 #include<bits/stdc++.h>
using namespace std;

int main() {
     string s="leetcode";
     int n=s.size();
     vector<int>ans(26,0);
     for(int i=0;i<n;i++) {
        ans[s[i]-97]++;
     }
     int maxi=*max_element(ans.begin(),ans.end());
     for(int i=0;ans.size();i++) {
        if(ans[i]==maxi) cout<<char(i+97)<<" "<<maxi<<endl;
     }
}