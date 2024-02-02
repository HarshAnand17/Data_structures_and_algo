#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter element in the array :";
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
      int x;
      cout<<"enter want to search : ";
      cin>>x;
     int lo=0;
     int hi=n-1;
     while(lo<=hi) {
    int mid=lo+(hi-lo)/2;
     if(arr[mid]==x) {
        cout<<mid;
        break; }
     else if(arr[mid]>x) hi=mid-1;
     else lo=mid+1;
  }
}