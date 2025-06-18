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
void topView(Node* root) {
     unordered_map<int,int>m;
     queue< pair<Node*,int>>q;
     q.push({root,0});
     while(q.size()>0) {
        Node* temp=q.front().first;
        int level=q.front().second;
        q.pop();
        if(m.find(level)==m.end()) {
            m[level]=temp->val;
        }
        if(temp->left) {
             q.push({temp->left,level-1});;
        }
        if(temp->right) {
             q.push({temp->right,level+1});;
        }
     }
        int minlevel=INT_MAX;
        int maxlevel=INT_MIN;
        for(auto x:m) {
            minlevel=min(minlevel,x.first);
            maxlevel=max(maxlevel,x.first);
        }
        for(int i=minlevel;i<=maxlevel;i++) cout<<m[i]<<" ";
     }
int main() {
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    topView(root);
}