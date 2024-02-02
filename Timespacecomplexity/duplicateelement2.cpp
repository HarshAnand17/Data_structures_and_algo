#include<bits/stdc++.h>
using namespace std;


   int main() {
       int arr[10]={1,2,3,4,5,6,9,8,9};
       int n=sizeof(arr)/sizeof(arr[0]);

       vector<int>ans(10,0);

          for(int i=0;i<n;i++) {
              if(ans[arr[i]]==0) ans[arr[i]]=1;
              else cout<<arr[i]<<" is duplicate";

          }

   } 
  

    // int n;
    // cout<<"enter size : ";
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++) {
    //     cin>>a[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++) {
    //   sum+=a[i];
    // }
    // int s=(n-1)*(n)/2;
    // cout<<sum-s;
