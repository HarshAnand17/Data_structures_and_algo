#include<bits/stdc++.h>
using namespace std;
void display(queue<int>&q) {
    int n=q.size();
    for(int i=0;i<n;i++) {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reversefirst(queue<int>&q,int k) {
    stack<int>st;
    int n=q.size();
    for(int i=1;i<=k;i++) {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0) {
        q.push(st.top());
        st.pop();
    }
      for(int i=1;i<=n-k;i++) {
       q.push(q.front());
       q.pop();
    }
}
int main() {
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reversefirst(q,2);
    display(q);
}