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
void display(Node* head) {
   Node* temp=head;
   while(temp!=NULL) {
      cout<<temp->val<<" ";
      temp=temp->next;
   }
}

void insertAtEnd(Node* head,int val) {
   Node* t = new Node(val);
   while(head->next!=NULL) head = head->next;
   head->next = t;
}

Node* deleteNode(Node* head,Node* tar) {
   if(head == tar) {
      head = head->next;
      return head;
   }
   Node* temp = head;
   while(temp->next!=tar) {
           temp = temp->next;
   }
   temp->next = temp->next->next;
    return head;
}

Node* deleteNode(Node* head,int tarVal) {
   if(head->val == tarVal) {
      head = head->next;
      return head;
   }
   Node* temp = head;
   while(temp->next->val!=tarVal) {
           temp = temp->next;
   }
   temp->next = temp->next->next;
    return head;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    a->next =b;
    b->next =c;
    c->next =d;
   
   display(a);
   cout<<endl;
   insertAtEnd(a,80);
   display(a);
   // deleteNode(a,d);
   Node* head = a;
    cout<<endl;
   display(head);
   head = deleteNode(head,30);

    cout<<endl;
     display(head);
  // cout<<a->next->next->next->val;
//    Node* temp = a;
//    while(temp!=NULL) {
//     cout<<temp->val<<" ";
//     temp = temp->next;
//    }

}