#include<bits/stdc++.h>
using namespace std;
void display(stack<int>&st) {
     if(st.size()==0) return;
     int x=st.top();
     cout<<x;
     st.pop();
     display(st);
     st.push(x);
}
int main() {
    stack<int>st;
    st.push(10);//10 20 30 40 50
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50); 
    display(st)   
}