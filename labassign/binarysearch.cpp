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
void display(Node* temp) {
   if(temp==NULL) return;
   display(temp->next);
   cout<<temp->val<<" ";
}

int size(Node* temp) {
   int s=0;
   while(temp) {
      s++;
      temp=temp->next;
   }
   return s;
}
int main() {
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   a->next=b;
   b->next=c;
   c->next=d;
   display(a);
  // cout<<size(a);
}