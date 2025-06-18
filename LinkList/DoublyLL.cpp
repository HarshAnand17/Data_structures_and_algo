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
class DDL{
public:
  Node* head;
  Node* tail;
  int size;
  DDL() {
    head=tail=NULL;
    size=0;
  }
  void insertAttail(int val) {
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else {
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  }
  size++;
 }
  void insertAtHead(int val) {
    Node* temp=new Node(val);
     if(size==0) head=tail=temp;
     else {
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    size++;
  }
  void insertAtIdx(int val,int idx) {
      if(idx<0 || idx>size) cout<<"Invalid index";
      else if(idx==0) insertAtHead(val);
      else if(idx==size) insertAttail(val);
      else {
       Node* temp=new Node(val);
       Node* t=head;
       for(int i=1;i<idx;i++) {
            t=t->next;
       }
       temp->next=t->next;
       t->next=temp;
       temp->prev=t;
       temp->next->prev=temp;
       size++;
      }
  }
   
   void delteAtHead() {
    if(size==0) {
      cout<<"Invalid";
      return;
    }
    head=head->next;
    if(head) head->prev=NULL;
    if(head==NULL) tail=NULL;
    size--;
   }

   void delteAtTail() {
    if(size==0) {
      cout<<"Invalid";
      return;
    }
   
     tail=tail->prev;
     if(tail) tail->next=NULL;
     if(tail==NULL) head=NULL;
    size--;
   }
  
  void deleteAtIdx(int idx) {
      if(size==0) {
      cout<<"Invalid";
      return;
    }
      else if(idx==0) delteAtHead();
      else if(idx==size-1) delteAtTail();
      else{
        Node* temp=head;
        for(int i=1;i<=idx-1;i++) {
             temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        size--;
      }
  }

  int getAtIdx(int idx) {
    if(idx<0 || idx>=size) {
      cout<<"Invalid index";
      return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else {
      if(idx<size/2) {
      Node* temp=head;
      for(int i=1;i<=idx;i++) {
         temp=temp->next;
      }
      return temp->val;
    }
    else {
       Node* temp=tail;
      for(int i=1;i<size-idx;i++) {
         temp=temp->prev;
      }
      return temp->val;
    }     
    }
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
         DDL List;
         List.insertAttail(10);
         List.insertAttail(20);
         List.insertAttail(30);
         List.insertAttail(40);
         List.display();
         List.insertAtHead(50);
         List.display();
         List.insertAtIdx(60,2);
         List.display();
         List.delteAtTail();
         List.display();
         List.delteAtHead();
         List.display();
         List.insertAttail(90);
         List.display();
         List.deleteAtIdx(3);
         List.display();
         List.insertAttail(40);
         List.insertAttail(50);
         List.display();
         cout<<List.getAtIdx(4);


}