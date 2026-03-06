#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int>s1,s2;
    void push(int x) {
        s1.push(x);
    }
    void pop() {
        if(!s2.empty()) s2.pop();
        else {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }
    int front() {
        if(!s2.empty()) return s2.top();
        else {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    int size() {
        return s2.size();
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