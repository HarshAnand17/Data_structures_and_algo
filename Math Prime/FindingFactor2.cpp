#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   int tar=8;
   int idx=-1;
//    for(int i=0;i<n;i++) {
//       if(arr[i]==tar) {
//         idx=i;
//         break;
//       }
//    }
//    if(idx!=-1) cout<<idx;
//    else cout<<-1;

  int lo=0;
  int hi=n-1;
  while(lo<=hi) {
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==tar) {
        if(arr[mid-1]!=tar) {
            idx=mid;
            break;
        }
        else hi=mid-1;   
    }
    else if(arr[mid]<tar) lo=mid+1;
    else hi=mid-1;
  }
  if(idx!=-1) cout<<idx;
  else cout<<-1;
}