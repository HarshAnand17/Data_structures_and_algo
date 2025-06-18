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
void display(Node* root) {
     if(root==NULL) return;
     cout<<root->val<<" ";
     display(root->left);
     display(root->right);
}

int sum(Node* root) {
      if(root==NULL) return 0;
     return root->val+sum(root->left)+ sum(root->right);
}
int size(Node* root) {
      if(root==NULL) return 0;
     return 1+size(root->left)+ size(root->right);
}
int maxIntree(Node* root) {
     if(root==NULL) return INT_MIN;
    return max(root->val,max(maxIntree(root->left),maxIntree(root->right)));
}
int levels(Node* root) {
      if(root==NULL) return 0;
     return 1+max(levels(root->left),levels(root->right));
}

void nthLevel(Node* root,int curr,int level) {
     if(root==NULL) return;
     nthLevel(root->right,curr+1,level);
     nthLevel(root->left,curr+1,level);
     if(curr==level) {
          cout<<root->val<<" ";
          return;
     }
}
void levelOrder(Node* root) {
     int n=levels(root);
     for(int i=1;i<=n;i++) {
          nthLevel(root,1,i);
          cout<<endl;
     }
}
void product(Node* root,int &prod) {
    if(!root) return;
    if(root->left) prod*=root->left->val;
    if(root->right) prod*=root->right->val;
    product(root->left,prod);
    product(root->right,prod);

}

void mn(Node* root,int &mini) {
     if(root==NULL) return;
     if(root->left) mini=min(root->left->val,mini);
     if(root->right) mini=min(root->right->val,mini);
    mn(root->left,mini);
    mn(root->right,mini);
}
int main() {
     Node* a=new Node(1);
     Node* b=new Node(2);
     Node* c=new Node(3);
     Node* d=new Node(4);
     Node* e=new Node(-5);
     Node* f=new Node(6);
     Node* g=new Node(7);

     a->left=b;
     a->right=c;
     b->left=d;
     b->right=e;
     c->left=f;
     c->right=g;
     int prod=a->val;
     product(a,prod);
     cout<<prod;
     cout<<endl;
     int mini=a->val;
     mn(a,mini); 
     cout<<mini; 
}