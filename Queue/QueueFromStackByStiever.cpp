#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int>s1,s2;
    void push(int x) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int front() {
        if(s1.size()==0) return -1;
        return s1.top();
    }
    void pop() {
        if(s1.size()==0) return;
        s1.pop();
    }
    int size() {
        return s1.size();
    }
};
int main() {
    Queue q;
    q.push(12);
    q.push(19);
    q.push(15);
    q.push(10);
    q.push(21);
    q.push(42);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}