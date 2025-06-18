#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* head) {
     if(head==NULL) return;
     cout<<head->val<<" ";
     display(head->left);
     display(head->right);
}
int sum(Node* head) {
    if(head==NULL) return 0;
    int left=sum(head->left);
    int right=sum(head->right);
    return head->val+left+right;
}
int size(Node* head) {
    if(head==NULL) return 0;
    return 1+size(head->left)+size(head->right);
}
int mx(Node* head) {
    if(head==NULL) return INT_MIN;
    return max(head->val,max(mx(head->left),mx(head->right)));
}
int levels(Node* head) {
    if(head==NULL) return 0;
    return 1+max(levels(head->left),levels(head->right));
}
void print(Node* head,int curr,int level) {
    if(head==NULL) return;
    print(head->right,curr+1,level);
    print(head->left,curr+1,level);
    if(curr==level) {
        cout<<head->val<<" ";
        return;
    }

}
void levelOrder(Node* head) {
      int n=levels(head);
      for(int i=1;i<=n;i++) {
        print(head,1,i);
        cout<<endl;
      }
}
void Bfs(Node* root) {
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* t=q.front();
        q.pop();
        cout<<t->val<<" ";
        if(t->left) q.push(t->left);
        if(t->right) q.push(t->right);
    }
}
// Node* construct(int arr[],int n) {
//     queue<Node*>q;
//     Node* root=new Node(arr[0]);
//     q.push(root);
//     int i=1;
//     int j=2;
//     while(!q.empty() && i<n) {
//          Node* t=q.front();
//          q.pop();
//          Node* l;
//          Node* r;
//          if(arr[i]!=INT_MIN) l=new Node(arr[i]);
//          else l=NULL
//          if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
//          else r=NULL;
//          t->left=l;
//          t->right=r;
//          if(l!=NULL) q.push(l); 
//          if(r!=NULL) q.push(r); 
//          i+=2;
//          j+=2;

//     }
//     return root;
// }

Node* construct(int arr[],int n) {
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n) {
       Node* temp=q.front();
       q.pop();
       Node* l;
       Node* r;
       if(arr[i]!=INT_MIN)   l=new Node(arr[i]);
       else l=NULL;
       if(j!=n && arr[j]!=INT_MIN)  r=new Node(arr[j]);
       else r=NULL;
       temp->left=l;
       temp->right=r;
       if(l!=NULL) q.push(l);
       if(r!=NULL) q.push(r);
 
       i+=2;
       j+=2;
    }
 
    return root;
 }
int main() {
    // Node* a=new Node(1);
    // Node* b=new Node(2);
    // Node* c=new Node(3);
    // Node* d=new Node(4);
    // Node* e=new Node(5);
    // Node* f=new Node(6);
    // Node* g=new Node(7);

    // a->left=b;
    // a->right=c;
    // b->left=d;
    // b->right=e;
    // c->left=f;
    // c->right=g;

    //display(a);
    //cout<<sum(a);
    //cout<<size(a);
   // cout<<mx(a);
   //cout<<levels(a);
//    print(a,1,1);
//    print(a,1,2);
//    print(a,1,3);

//    levelOrder(a);
   int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   Node* root=construct(arr,n);
   Bfs(root);
}