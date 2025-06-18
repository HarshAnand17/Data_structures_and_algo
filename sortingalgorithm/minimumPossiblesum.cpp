#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={0,1,2,8,10,17,18,20};
    int lo=0;
    int hi=arr.size()-1;
    while(lo<=hi) {
      int mid=lo+(hi-lo)/2;
      if(arr[mid]==mid) lo=mid+1;
      else if(arr[mid]>mid) hi=mid-1;
      else lo=mid+1;
    }
    cout<<lo;
}