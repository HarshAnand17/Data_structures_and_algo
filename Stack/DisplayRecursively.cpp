#include<bits/stdc++.h>
using namespace std;
void displayRev(stack<int>&st) {
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
     displayRev(st);
    cout<<x<<" ";
     st.push(x);
}

void pushAtbottom(stack<int>& st,int val) {
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtbottom(st,val);
    st.push(x);
}
void reverse(stack<int>&st) {
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);
}
int main() {
    stack<int>st;
    st.pop();
    st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRev(st);
   // pushAtbottom(st,-10);
    cout<<endl;
    reverse(st);
    displayRev(st);
}