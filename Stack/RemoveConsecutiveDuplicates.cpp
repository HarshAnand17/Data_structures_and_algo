#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
    int n=s.size();
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<n;i++) {
         if(s[i]!=s[i-1]) st.push(s[i]);
    }
    s="";
    while(st.size()>0) {
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
} 
int main() {
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    s=removeDuplicates(s);
    cout<<s<<endl;
}