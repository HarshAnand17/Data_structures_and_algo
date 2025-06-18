#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,int i,int arr[],int n) {
    if(i==n) {
      for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
      cout<<endl;
      return;
    }
    subset(v,i+1,arr,n);
    v.push_back(arr[i]);
    subset(v,i+1,arr,n);
}
int main() {
   int arr[]={1,2,3};
   int n=sizeof(arr)/sizeof(arr[0]);
  vector<int>v;
  subset(v,0,arr,n);
}




