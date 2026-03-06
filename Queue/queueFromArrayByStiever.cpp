#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int  s=10;
    int arr[10];
    int st=-1,end=-1,currSize=0;
    void push(int x) {
       if(currSize==s) return;
       if(currSize==0) {
          st=0;
          end=0;
       }
       else end=(end+1)%s;
       arr[end]=x;
       currSize+=1;
    }
    void pop() {
        if(currSize==0) return;
        if(currSize==1) {
            st=-1;
            end=-1;
        }
        st=(st+1)%s;
        currSize-=1;
    }
    int front() {
        if(currSize==0) return -1;
        return arr[st];
    }
    int back() {
        if(currSize==0) return -1;
        return arr[end];
    }
    int size() {
        return currSize;
    }
    void display() {
      for(int i=st;i<=end;i++) {
         cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.display();
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.display();
}