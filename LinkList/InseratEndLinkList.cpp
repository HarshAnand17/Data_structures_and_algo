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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList() {
        head=tail=NULL;
        size=0;
    }
     void insertAtend(int val) {
          Node* temp=new Node(val);
          if(size==0)  head=tail=temp;

          else {
            tail->next=temp;
            tail=temp;
          }
            size++;   
   }

    void insertAtbegining(int val) {
      Node* temp=new Node(val);
      if(size==0) head=tail=temp;
      else {
           temp->next=head;
           head=temp;
      }
         size++;

    }
    void insertAtindex(int val,int idx) {
      Node* temp=new Node(val);
      Node* t=head;
      int i=0;
      while(i!=idx-1) {
          t=t->next;
          i++;
      }
      temp->next=t->next;
      t->next=temp;
      size++;
    }
    int getIdx(int idx) {
        if(idx<0 || idx>=size) {
          cout<<"Invalid index";
          return -1;
         }
         else if(idx==0) return head->val;
         else if(idx==size-1) return tail->val;
         else{
              Node* temp=head;
              for(int i=0;i<idx;i++) {
                temp=temp->next;
              }
               return temp->val;
         }
    }
    void deleteAtHead() {
       if(size==0) {
          cout<<"List is empty";
          return;
       }
      else{
        head=head->next;
        size--;
      }  
    }
    void deleteAttail() {
         if(size==0) {
          cout<<"List is empty";
          return;
       }
        Node* temp=head;
        while(temp->next!=tail) {
          temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;    
  
    }

    void deleteatindex(int idx) {
      if(size==0) {
          cout<<"List is empty";
          return;
      }
      else if(idx<0 || idx>=size) {
        cout<<"Invalid index";
        return;
      }
      else if(idx==0) return deleteAtHead();
      else if(idx==size-1) return deleteAttail();
      else{
      Node* temp=head;
      int i=0;
      while(i!=idx-1) {
         temp=temp->next;
         i++;
      }
         temp->next=temp->next->next;
         size--;
      }
    }
   void display() {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
  }
};

int main() {
    LinkedList LL;
    LL.insertAtend(60);
    LL.display();
    LL.insertAtend(20);
    cout<<endl;
    LL.display();
    LL.insertAtend(30);
    LL.insertAtend(40);
    cout<<endl;
    LL.display();
    cout<<endl;
    cout<<LL.size;
    cout<<endl;
    LL.insertAtbegining(5);
    LL.display();
    cout<<endl;
    cout<<LL.size;
    cout<<endl;
    LL.insertAtindex(85,5);
     LL.display();
    cout<<endl;
    cout<<LL.size;
    cout<<endl;
   //cout<<LL.getIdx(6);
     LL.deleteAtHead();
     LL.display();
     cout<<endl;
     cout<<LL.size;
     cout<<endl;
    // LL.deleteAttail();
    // LL.display();
     cout<<endl;
     LL.deleteatindex(3);
     LL.display();
     cout<<endl;
    cout<<LL.size;
}