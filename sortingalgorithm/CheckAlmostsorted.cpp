#include<bits/stdc++.h>
using namespace std;
int main() {
      int arr[]={4,2,9,7,8};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     //bubble sort
     int brr[n];
     for(int i=0;i<n;i++) {
      brr[i]=arr[i];
     }
     for(int i=0;i<n-1;i++) {
      for(int j=0;j<n-1-i;j++) {
           if(brr[j+1]<brr[j]) {
            swap(brr[j],brr[j+1]);
           }
      }
     }
     for(int i=0;i<n;i++) {
        cout<<brr[i]<<" ";
     }
     bool flag=true;
    for(int i=0;i<n;i++) {
       if(i==0) {
         if(brr[i]!=arr[i] && brr[i]!=arr[i+1]) {
             flag=false;
             break;
         }
       }
       else if(i==n-1) {
         if(brr[i]!=arr[i] && brr[i]!=arr[i-1]) {
             flag=false;
             break;
         }
       }
       else {
        if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=arr[i+1]) {
          flag=false;
          break;
        }
       }
    }
    cout<<endl;
    if(flag==false) cout<<"array is not sorted";
    else cout<<"array is sorted";
}