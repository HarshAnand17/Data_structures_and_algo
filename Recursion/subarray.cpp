#include<bits/stdc++.h>
using namespace std;
// void printSubarray(int arr[],int idx,int n,vector<int>v) {
//     if(idx==n) {
//         for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//         cout<<endl;
//         return;
//     }
//      printSubarray(arr,idx+1,n,v);
//      if(v.size()==0 || v.back()==arr[idx-1]) {
//         v.push_back(arr[idx]);
//         printSubarray(arr,idx+1,n,v);
//      }
// }
// int main() {
//      int arr[]={1,2,3,4};
//     vector<int>v;
//     int n=4;
//      printSubarray(arr,0,n,v);
// }
void subarray(vector<int>&arr,int idx,vector<int>ans) {
    if(idx==arr.size()) {
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    subarray(arr,idx+1,ans);
    if(ans.size()==0 || arr[idx-1]==ans.back()){
        ans.push_back(arr[idx]);
        subarray(arr,idx+1,ans);
    }
}
int main() {
    vector<int>arr={1,2,3};
    vector<int>ans;
    subarray(arr,0,ans);
}