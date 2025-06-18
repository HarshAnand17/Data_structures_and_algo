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

class linkList{
    public:
      Node* head;
      Node* tail;
      int size;
      linkList() {
        head=tail=NULL;
        size=0;
      }
      void insertAtEnd(int val) {
          Node* temp=new Node(val);
          if(size==0) {
            head=tail=temp;
          }
          else {
            tail->next=temp;
            tail=temp;
        }
        size++;
      }
      void insertAtBegining(int val) {
          Node* temp=new Node(val);
          if(size==0) {
            head=tail=temp;
          }
          else {
          temp->next=head;
          head=temp;
        }
        size++;
      }
      void  insertAtindex(int idx,int val) {
         if(idx==0) insertAtBegining(val);
         if(idx==size) insertAtEnd(val);
         if(idx<0 || idx>size) {
            cout<<"Invalid";
            return;
         }
         else {
         Node* t=new Node(val);
         Node* temp=head;
         for(int i=0;i<idx-1;i++) {
              temp=temp->next;
         }
         t->next=temp->next;
         temp->next=t;
         size++;
      }
    }
    void deleteAtHead() {
         if(size==0) {
            cout<<"list is empty";
            return;
         }
         else head=head->next;
         size--;
    }
    void deleteAtTail() {
        if(size==0) {
            cout<<"list is empty";
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
    void display() {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
   }

   void  deleteAtindex(int idx) {
    if(idx==0) deleteAtHead();
    else if(idx==size-1) deleteAtTail();
    else if(idx<0 || idx>=size) {
        cout<<"Invalid";
        return;
    }
    else {
    Node* temp=head;
    for(int i=0;i<idx-1;i++) {
         temp=temp->next;
    }
    temp->next=temp->next->next;
    size--;
 }
}
};
void displayRec(Node* head) {
    if(head==NULL) return;
    displayRec(head->next);
    cout<<head->val<<" ";
}

int main() {
   linkList ll;
   ll.insertAtEnd(10);
   ll.display();
   ll.insertAtEnd(20);
   ll.display();
   ll.insertAtEnd(30);
   ll.insertAtEnd(40);
   ll.display();
   cout<<ll.size;
   cout<<endl;
   ll.insertAtBegining(15);
   ll.display();
   ll.insertAtindex(2,90);
   ll.display();
   ll.deleteAtHead();
   ll.display();
   ll.deleteAtTail();
   ll.display();
   ll.deleteAtindex(0);
   ll.display();
}