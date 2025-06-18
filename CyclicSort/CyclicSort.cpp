#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr={5,1,2,3,4};
    int n=arr.size();
    for(int i=0;i<n;i++) {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n) {
      int cIdx=arr[i]-1;
      if(cIdx==i) i++;
      else swap(arr[i],arr[cIdx]);
    }
     for(int i=0;i<n;i++) {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}