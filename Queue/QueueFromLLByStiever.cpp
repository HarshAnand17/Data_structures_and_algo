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
class Queue{
    public:
    Node* st=NULL;
    Node* end=NULL;
    int s=0;
    void push(int x) {
        Node* temp=new Node(x);
        if(st==NULL) {
            st=temp;
            end=temp;
        }
        else {
            end->next=temp;
            end=temp;
        }
        s=s+1;
    }
    void pop() {
         if(st==NULL) return;
         Node* temp=st;
         st=st->next;
         delete temp;
         s-=1;
    }
    int front() {
        if(st==NULL) return -1;
        return st->val;
    }
    int back() {
        if(end==NULL) return -1;
        return end->val;
    }
    int size() {
        return s;
    }
};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(9);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
}