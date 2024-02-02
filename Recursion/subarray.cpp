#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n,int idx,vector<int> ans) {
    if(idx==n) {
       for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
       }
       cout<<endl;
       return;
    } 
     subarray(arr,n,idx+1,ans);
     if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1]) {
     ans.push_back(arr[idx]);
     subarray(arr,n,idx+1,ans);
 }
    }
int main() {
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   // vector<int> v;
   //subarray(arr,n,0,v);

   for(int i=0;i<n;i++) {
    for(int k=i;k<n;k++) {
        for(int j=i;j<=k;j++) {
        cout<<arr[j];
        }
    cout<<endl;
    }
   }
}