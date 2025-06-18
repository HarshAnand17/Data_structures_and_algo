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
void levelOrderQueue(Node* root) {
   queue<Node*>q;
   q.push(root);
   while(q.size()!=0) {
      Node* temp=q.front();
      q.pop();
      cout<<temp->val<<" ";
      if(temp->left!=NULL) q.push(temp->left);
      if(temp->right!=NULL)q.push(temp->right);
   }
   cout<<endl;
}
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
      if(arr[i]!=INT_MIN) l=new Node(arr[i]);
      else l=NULL;
      if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
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
void HorLevel(Node* root,int &minLevel,int &maxLevel,int level) {
     if(root==NULL) return;
     minLevel=min(minLevel,level);
     maxLevel=max(maxLevel,level);
      HorLevel(root->left,minLevel,maxLevel,level-1);
      HorLevel(root->right,minLevel,maxLevel,level+1);
}
void topView(vector<int>&top,Node* root,int level) {
    if(root==NULL) return;
    top[level]=root->val;
     topView(top,root->left,level-1);
     topView(top,root->right,level+1);
}
int main() {
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelOrderQueue(root);
    int minLevel=0;
    int maxLevel=0;
    HorLevel(root,minLevel,maxLevel,0);
    int horizontals=maxLevel-minLevel+1;
    vector<int>top(horizontals,INT_MIN);
    topView(top,root,-minLevel);
    for(int i=0;i<top.size();i++) {
        cout<<top[i]<<" ";
    }
}