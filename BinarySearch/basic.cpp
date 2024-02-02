#include<bits/stdc++.h>
using namespace std;

int main() {
  int arr[]={1,2,4,5,9,15,18,21,24};
  int n=sizeof(arr)/sizeof(arr[0]);
//  int target=20;
//  int lo=0,hi=n-1;
//  int idx=-1;
//  int mid;
//  while(lo<=hi) {
//      mid=lo+(hi-lo)/2;
//   if(arr[mid]==target) {
//     idx=mid;
//     break;
//   }
//   else if(arr[mid]>target) hi=mid-1;
//   else lo=mid+1;
//  }
//  if(idx!=-1) cout<<"yes element is present at index "<<mid;
//  else cout<<"not present";

   int max=INT_MIN;
   for(int i=0;i<n;i++) {
    if(arr[i]>max) max=arr[i];
   }
   cout<<max<<endl;
  
   int min=INT_MAX;
   for(int i=0;i<n;i++) {
    if(arr[i]<min) min=arr[i];
   }
   cout<<min;
}