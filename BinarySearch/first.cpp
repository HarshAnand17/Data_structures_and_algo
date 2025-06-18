#include<bits/stdc++.h>
#include<stdbool.h>
#include<string.h>

int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size()>0) {
        cout<<st.top()<<" ";
        st.pop();
    }
}