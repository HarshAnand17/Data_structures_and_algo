#include<bits/stdc++.h>
using namespace std;
//1st approach
// class Node{
// public:
//    int val;
//    Node* next;
//    Node(int val) {
//     this->val=val;
//     this->next=NULL;
//    }
// };
// int main() {
   //  Node a(10);
   //  Node b(20);
   //  Node c(30);
   //  Node d(40);
    //forming ll
   //   a.next=&b;
   //   b.next=&c;
   //   c.next=&d;
    //  a.next->val=90;
    // cout<<b.val;
   //   cout<<(((a.next)->next)->next)->val;
   //   cout<<(*((*((*(a.next)).next)).next)).val;
    //cout<<(*(a.next)).val;

   //   Node temp=a;
   //   while(1) {
   //    cout<<temp.val<<" ";
   //    if(temp.next=NULL) break;
   //    temp= *(temp.next);
   //   }

   
   //2nd aaproach
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
          while(head) {
            cout<<head->val<<" ";
            head=head->next;
          }
    }
    int size(Node* head) {
       // Node* temp=head;
        int n=0;
          while(head) {
            n++;
            head=head->next;
          }
          return n;
    }

    void recusivelydisplay(Node* head) {
      // Node* temp=head;
       if(head==NULL) return;
       cout<<head->val<<" ";
       recusivelydisplay(head->next);
    }
    void insertAtend(Node* head,int val) {
      Node* t=new Node(val);
      Node* temp=head;
      while(temp->next!=NULL) {
        temp=temp->next;
      }
      temp->next=t;
    }

     Node* deleteanode(Node* head,int target) {
      if(head->val==target) {
         head=head->next;
         return head;
      }
        Node* temp=head;
        while(temp->next->val!=target) {
           temp=temp->next;
        }
          temp->next=temp->next->next;
          return head;
     }
    int main() {
        Node* a = new Node(10);
        Node* b = new Node(20);
        Node* c = new Node(30);
        Node* d = new Node(40);
        Node* e = new Node(50);

        a->next=b;
        b->next=c;
        c->next=d;
        d->next=e; 
      //  display(a);
      //  cout<<endl;

       Node* head=a;
       insertAtend(a,80);
       display(head);
       cout<<endl;
       head=deleteanode(head,30);
       display(head);
       //  recusivelydisplay(a);
          cout<<endl;
       // cout<<a->next->next->val;
      //   Node* temp=a;
      //   while(temp!=NULL) {
      //    cout<<temp->val<<" ";
      //    temp=temp->next;
      //   }
        // cout<<size(a);
    }