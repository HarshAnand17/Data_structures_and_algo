#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     stack<int>st;
      int nge[n];
      nge[n-1]=-1;
      st.push(arr[n-1]);
      for(int i=n-2;i>=0;i--) {
        while(st.top()<=arr[i]) st.pop();
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
      }

  for(int i=0;i<n;i++) {
        cout<<nge[i]<<" ";
     }
     cout<<endl;
}