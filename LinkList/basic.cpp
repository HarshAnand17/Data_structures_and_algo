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

    class LinkList{ //userdefined data structure
        public:
        Node* head;
        Node* tail;
        int size=0;
        LinkList() {
          head=tail=NULL;
          size=0;
        }
        void insertAtEnd(int val) {
           Node* temp=new Node(val);
           if(size==0) head=tail=temp;
           else {
            tail->next=temp;
            tail=temp;
           }
           size++;
        }
        void insertAtHead(int val) {
            Node* temp=new Node(val);
            if(size==0) head=tail=temp;
           else{ 
            temp->next=head;
            head=temp;
           }
           size++;
        }
     void insertAtIdx(int idx,int val) {
        if(idx<0 || idx>size) cout<<"Invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else {
          Node* t=new Node(val);
          Node* temp=head;
          for(int i=1;i<=idx-1;i++) {
             temp=temp->next;
          }
         t->next=temp->next;
         temp->next=t;
         size++;
        }
     }

     int getAtIdx(int idx) {
         if(idx<0 || idx>=size) {
            cout<<"Invalidindex";
            return -1;
         }
         else if(idx==0) cout<<head->val;
         else if(idx==size-1) cout<<tail->val;
         else {
            Node* temp=head;
            for(int i=0;i<=idx-1;i++) {
                temp=temp->next;
            }
            return temp->val;

         }
     }

     void deleteAtHead() {
      if(size==0) {
         cout<<"list is empty";
         return;
      }
      head=head->next;
      size--;
     }

     void deleteAtEnd() {
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

     void deleteAtIndex(int idx) {
         if(size==0) {
         cout<<"list is empty";
         return;
      }
      Node* temp=head;
      int i=0;
      while(i<idx-1) {
         temp=temp->next;
         i++;
      }
      temp->next=temp->next->next;
      size--;
     }
        void display() {
          Node* temp=head;
          while(temp) {
            cout<<temp->val<<" ";
            temp=temp->next;
          }
          cout<<endl;
        } 

        void addcycle(int idx) {
         Node* temp=head;
         idx--;
         while(idx--) {
            temp=temp->next;
         }
         temp->next->next=head->next;
         //cout<<temp->val<<" "<<head->next->val;
        }
         int findlength() {
            Node* fast=head->next;
            Node* slow=head;
            int fl=0;
            while(fast && fast->next) {
               if(fast==slow) {
                  fl=1;
                  break;
               }
               fast=fast->next->next;
               slow=slow->next;
            } 
            if(fl==0) return 0;

            int count=1;
            slow=slow->next;
            while(slow!=fast) {
               count++;
               slow=slow->next;
            }
            return count;
         } 
    };
    int main() {
       LinkList ll;
       ll.insertAtHead(50);
       ll.insertAtHead(24);
       ll.insertAtHead(84);
       ll.insertAtHead(14);
       ll.insertAtHead(54);
      
       ll.addcycle(2);
       cout<<ll.findlength()<<endl;
    }