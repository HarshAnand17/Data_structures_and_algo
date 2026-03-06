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
void print(Node* head) {
    Node* temp=head;
    while(temp) {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl;
}
Node* deleteAtHead(Node* head) {
    if(head==NULL || head->next==NULL) {
        return NULL;
    }
    Node* prev=head;
    head=head->next;

    head->prev=NULL;
    prev->next=NULL;

    delete prev;
    return head;
}

Node* deteteAtTail(Node* head) {
     if(head==NULL || head->next==NULL) {
        return NULL;
    }
    Node* tail=head;
    while(tail->next) {
        tail=tail->next;
    }
    Node* newTail=tail->prev;
    newTail->next=NULL;
    tail->prev=NULL;
    delete tail;
    return head;
}
Node* removeKthElement(Node* head,int k) {
    if(head==NULL) return NULL;
    int cnt=0;
    Node* KNode=head;
    while(KNode) {
        cnt++;
        if(cnt==k) break;
        KNode=KNode->next;
    }
    Node* prev=KNode->prev;
    Node* front=KNode->next;

    if(prev==NULL && front==NULL) {
        return NULL;
    }
    else if(prev==NULL) return deleteAtHead(head);
    else if(front==NULL) return deteteAtTail(head);
    prev->next=front;
    front->prev=prev;
    KNode->next=NULL;
    KNode->prev=NULL;
    delete KNode;
    return head;
}

void deleteNode(Node* temp) {
    Node* prev=temp->prev;
    Node* front=temp->next;

    if(front==NULL) {
        prev->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }
    prev->next=front;
    front->prev=prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    return;
}

//inserting
Node* insertBeforeHead(Node* head,int val) {
    Node* newHead=new Node(val);
    newHead->next=head;
    head->prev=newHead;
    return newHead;
}
Node* insertBeforeTail(Node* head,int val) {
    if(head->next==NULL) return insertBeforeHead(head,val);
    Node* tail=head;
    while(tail->next) {
        tail=tail->next;
    }
    Node* prev=tail->prev;
    Node* newNode=new Node(val);
    newNode->next=tail;
    newNode->prev=prev;
    prev->next=newNode;
    tail->prev=newNode;
    return head;
}
Node* insertBeforeKthElement(Node* head,int k,int val) {
    if(k==1) return insertBeforeHead(head,val);
    Node* temp=head;
    int cnt=0;
    while(temp) {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->prev;
    Node* newNode=new Node(val);
    newNode->next=temp;
    newNode->prev=prev;
    prev->next=newNode;
    temp->prev=newNode;
    return head;
}
void insertBeforeNode(Node* node,int val) {
    Node* prev=node->prev;
    Node* newNode=new Node(val);
    newNode->next=node;
    newNode->prev=prev;
    prev->next=newNode;
    node->prev=newNode;
}
int main() {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    b->prev=a;
    c->next=d;
    c->prev=b;
    d->next=e;
    d->prev=c;
    e->prev=d;
    print(a);
    Node* head=deleteAtHead(a);
    print(head);
    head=deteteAtTail(head);
    print(head);
    head=removeKthElement(head,2);
    print(head);
    deleteNode(head->next);
    print(head);
    head=insertBeforeHead(head,10);
    print(head);
    head=insertBeforeTail(head,50);
    print(head);
    head=insertBeforeKthElement(head,3,100);
    print(head);
    insertBeforeNode(head->next->next,500);
    print(head);

}