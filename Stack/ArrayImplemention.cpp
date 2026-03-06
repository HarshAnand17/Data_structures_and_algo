#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int arr[10];
    int idx=-1;

    void push(int x) {
         if(idx>=9) return;
         idx++;
         arr[idx]=x;
    }
    void pop() {
         if(idx==-1) return;
         idx--;
    }
    int top() {
        if(idx==-1) return -1;
        return arr[idx];
    }
    int size() {
        return idx+1;
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}