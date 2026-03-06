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
void print(Node* head) {
    Node* temp=head;
    while(temp) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* removeHead(Node* head) {
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* removeTail(Node* head) {
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL) {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}
Node* removeK(Node* head,int k) {
    if(head==NULL) return head;
    if(k==1) {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp) {
        cnt++;
        if(cnt==k) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* removeEl(Node* head,int ele) {
    if(head==NULL) return head;
    if(head->val==ele) {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp) {
        if(temp->val==ele) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

//Inserting
Node* insertAtHead(Node* head,int val) {
      Node* temp=new Node(val);
      temp->next=head;
      head=temp;
      return head;
}
Node* insertAtTail(Node* head,int val) {
    Node* temp=head;
    if(head==NULL) {
       Node* newNode=new Node(val);
       temp->next=newNode;
       return head;
    }
    while(temp->next) {
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}
Node* insertAtPosition(Node* head,int val,int k) {
      if(head==NULL) {
        if(k==1) {
            Node* temp=new Node(val);
            return temp;
        }
        else return head;
      }
      if(k==1) {
        Node*temp=new Node(val);
        temp->next=head;
        head=temp;
        return head;
      }
      Node* t=head;
      int cnt=0;
      while(t) {
        cnt++;
        if(cnt==k-1) {
           Node* temp=new Node(val);
           temp->next=t->next;
           t->next=temp;
           break;
        }
        t=t->next;
      }
      return head;
}

Node* insertBeforeVal(Node* head,int val,int x) {
      if(head==NULL) {
          return NULL;
      }
      if(head->val==x) {
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        return head;
      }
      Node* t=head;
      while(t) {
        if(t->next->val==x) {
           Node* temp=new Node(val);
           temp->next=t->next;
           t->next=temp;
           break;
        }
        t=t->next;
      }
      return head;
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    print(a);
    Node* head=removeHead(a);
    print(head);
    head=removeTail(head);
    print(head);
    head=removeK(head,3);
    head=removeEl(head,30);
    print(head);
    head=insertAtHead(head,100);
    print(head);
    head=insertAtTail(head,200);
    print(head);
    head=insertAtPosition(head,300,1);
    print(head);
    head=insertBeforeVal(head,400,100);
    print(head);
}