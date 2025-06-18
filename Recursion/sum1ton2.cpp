#include<bits/stdc++.h>
using namespace std;

int main() {
      int arr[]={1,2,3,2,5,1};
      int n=sizeof(arr)/sizeof(arr[0]);
      int x=6;
      int count=0;
      for(int i=0;i<n-2;i++) {
        for(int j=i+1;j<n-1;j++) {
           for(int k=j+1;k<n;k++) {
               if(arr[i]+arr[j]+arr[k]==x) count++;
           }
        }
      }
      cout<<count;
}