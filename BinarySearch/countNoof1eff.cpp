#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={0,0,0,1,1};
   int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0,hi=n-1;
    int ans=-1;
    while(lo<=hi) {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==1) {
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    cout<<n-ans;
}