#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[9]={1,2,4,5,9,15,18,20,24};
    int n=9;
    int x=19;
   // int lo=0;
   // int hi=n-1;
   //  bool flag=false;
   //  int mid=-1;
   // while(lo<=hi) {
   //     mid=lo+(hi-lo)/2;
   //    if(arr[mid]==x) {
   //       flag=true;
   //       break;
   //    }
   //    else if(arr[mid]>x) hi=mid-1;
   //    else lo=mid+1;
   // }
   //  if(flag==true) cout<<arr[mid+1];
   //  else cout<<arr[lo];
    for(int i=0;i<n;i++) {
      if(arr[i]>=x) {
         cout<<arr[i];
         break;
    }
}
}
     