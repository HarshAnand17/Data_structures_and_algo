#include<bits/stdc++.h>
using namespace std;

int main() {
//     string s;
//    getline(cin,s);
//    long long x=stoll(s);
//    cout<<x;

  string s="leetcode";
  cout<<s<<endl;
  int n=s.size();
  int count=0;
  int maxcount=0;
  vector<int>ans(26,0);
  for(int i=0;i<n;i++) {
      int x=s[i]-97;
      ans[x]++;
  }
  int max=INT_MIN;
  for(int i=0;i<26;i++) {
      if(ans[i]>max) max=ans[i];
  }
    for(int i=0;i<26;i++) {
      char ch=i+97;
      if(ans[i]==max)   cout<<ch<<" "<<max<<endl;

    }
}