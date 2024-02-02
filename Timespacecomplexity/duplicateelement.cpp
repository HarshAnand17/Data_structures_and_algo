#include<bits/stdc++.h>
using namespace std;

  int main() {
   int arr[10]={1,2,3,3,4,5,6,7,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   bool flag=false;

   for(int i=0;i<n-1;i++) {
       for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                flag=true;
                break;
            }
       }
   }

   if(flag) cout<<"yes element is duplicate present";
   else cout<<"no element duplicate is present";
  }