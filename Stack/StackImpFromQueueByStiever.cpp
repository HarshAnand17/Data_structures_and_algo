#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    queue<int>q;
    void push(int x) {
       int n=q.size();
       q.push(x);
       for(int i=1;i<=n;i++) {
          q.push(q.front());
          q.pop();
       }
    }
    void pop() {
        if(q.size()==0) return;
        q.pop();
    }
    int top() {
        if(q.size()==0) return -1;
        return q.front();
    }
    int size() {
        return q.size();
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(13);
    st.push(24);
    st.push(15);
    st.push(5);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}