#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string s) {
    stack<char>st;
    int n=s.size();
    for(int i=0;i<n;i++) {
        if(s[i]=='(') st.push(s[i]);
        else  {
            if(s.size()>0) st.pop();
            else return false;
        }
    }
    if(st.size()>0) return false;
    else return true;
}
int main() {
    string s="()(()()";
    cout<<isBalanced(s);
}