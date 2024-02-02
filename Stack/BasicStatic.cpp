#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string s) {
  int n=s.size();
  if(n%2!=0) return false;
  stack<char>st;
  for(int i=0;i<n;i++) {
    if(s[i]=='(') st.push(s[i]);
    else if(s[i]==')')  {
      if(st.size()==0) return false;
      else st.pop();
    }
  }
  if(st.size()==0) return true;
  else false;
}
int main() {
   string s="())()(";
   cout<<isbalanced(s);
    // cout<<st.size()<<endl;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top();

    //reversing order
    // while(st.size()>0) {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    
    //print right order
    // stack<int> temp;
    //     while(st.size()>0) {
    //     cout<<st.top()<<" ";
    //     int x=st.top();
    //     st.pop();
    //     temp.push(x);
    // }
    // while(temp.size()>0) {
    //   st.push(temp.top());
    //   temp.pop();
    // }
    // cout<<endl;
    // cout<<st.top();

    //cout<<st.size()<<endl;
  
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;

    //st.display();
   }
