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
int main() {
     Node a(10);
     Node b(10);
     Node c(10);
     Node d(10);
     
     a.next=&b;
     b.next=&c;
     c.next=&d;
     d.next=NULL;
    
    Node temp=a;
    while(1) {
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
    

}