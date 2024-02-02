#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi) {
     int mid=lo+(hi-lo)/2;
     if(arr[mid]==x) {
      if(arr[mid-1]==x) {
        hi=mid-1;
      }
      else {
        cout<<mid;
        flag=true;
        break;
      }
     }
     else if(arr[mid]>x) hi=mid-1;
     else lo=mid+1;
    }
      if(flag==false)  cout<<"not such type element is present";  
     }