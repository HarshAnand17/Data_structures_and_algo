#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
public:
  Node* head;
  Node* tail;
  int s;
  Deque() {
    head=tail=NULL;
    s=0;
  }
  void pushback(int val) {
    Node* temp=new Node(val);
    if(s==0) head=tail=temp;
    else {
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  }
  s++;
 }
  void pushfront(int val) {
    Node* temp=new Node(val);
    if(s==0) head=tail=temp;
    else {
      temp->next=head;
      head->prev=temp;
      head=temp;
  }
  s++;
  }
  void popback() {
       if(s==0) {
        cout<<"queue is empty"<<endl;
       return;
       }
       tail=tail->prev;
        if(tail) tail->next=NULL;
        if(tail==NULL) head=NULL;
        s--;
  }
  void popfront() {
       if(s==0) {
        cout<<"queue is empty"<<endl;
       return;
       }
       head=head->next;
       if(head)head->prev=NULL;
       if(!head) tail=NULL;
       s--;
  }
   
   int front() {
       if(s==0) {
       cout<<"queue is empty"<<endl;
       return -1;
       }
       return head->val;
   }
   int back() {
         if(s==0) {
        cout<<"queue is empty"<<endl;
       return -1;
       }
       return tail->val;
   }
   int size() {
     return s;
   }
void display() {
    Node* temp=head;
     while(temp) {
        cout<<temp->val<<" ";
        temp=temp->next;
     }
     cout<<endl;
   }
};
int main() {
     Deque q;
     q.pushback(10);
     q.pushback(20);
     q.pushback(30);
     q.pushback(40);
     q.display();
     q.popback();
     q.display();
     q.popfront();
     q.display();
     q.pushfront(50);
     q.display();
     cout<<q.front()<<endl;
     cout<<q.back()<<endl;
     cout<<q.size();

}