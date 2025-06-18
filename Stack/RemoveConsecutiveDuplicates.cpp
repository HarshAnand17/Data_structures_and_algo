#include<bits/stdc++.h>
using namespace std;
int main() {
  string s="aaabbcddaabffg";
  cout<<s<<endl;
  stack<char>st;
  st.push(s[0]);
  for(int i=1;i<s.size();i++) {
     if(st.size()>0 && st.top()!=s[i]) {
         st.push(s[i]);
     }
  }
  stack<char>temp;
  while(st.size()>0) {
     temp.push(st.top());
     st.pop();
  }
  string t;
  while(temp.size()>0) {
       t+=temp.top();
       temp.pop();
  }
  cout<<t<<endl;
}
