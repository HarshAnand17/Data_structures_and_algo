#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int val;
     Node* next;
     Node(int val) {
      this->val=val;
      this->next=NULL;
     }
};
class Stack{
    public:
    Node* t=NULL;
    int s=0;
    void push(int x) {
         Node* temp=new Node(x);
         temp->next=t;
         t=temp;
         s+=1;
    }
    void pop() {
        Node* temp=t;
        t=t->next;
        delete temp;
        s-=1;
    }
    int top() {
        return t->val;
    }
    int size() {
        return s;
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(8);
    st.push(4);
    st.push(5);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}