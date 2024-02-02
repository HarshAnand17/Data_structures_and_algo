#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* node){
    while(node){
        cout<<node->data<<"=";
        node=node->next;
    }
    cout<<endl;
}

int main() {
    Node* head = new Node(90);
    head->next=new Node(91);
    head->next->next=new Node(92);
    head->next->next->next=new Node(93);
    head->next->next->next->next=new Node(94);
    print(head);
    Node* prev=NULL;
    while(head) {
    Node * Next=head->next;
    head->next=prev;
    prev=head;
    head=Next;
    }
    print(prev);
}