#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
//      cout<<endl;
//      stack<int>st;
//      int pgi[n];
//     pgi[0] = -1;
//     st.push(0);
//       for(int i=1;i<=n-1;i++) {
//        while(st.size()>0 && arr[st.top()]<=arr[i]) {
//         st.pop();
//      }
//      if(st.size()==0) pgi[i]=-1;
//      else pgi[i]=st.top();
//      st.push(i);
// }

//   for(int i=0;i<n;i++) {
//         pgi[i]=i-pgi[i];
//      }
//   for(int i=0;i<n;i++) {
//         cout<<pgi[i]<<" ";
//      }
     stack<int>st;
     st.push(0);
     vector<int>pge(n,-1);
      for(int i=1;i<n;i++) {
        while(st.size()>0 && arr[i]>=arr[st.top()]){
         st.pop();
        }
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        st.push(i);
     }
     for(int i=0;i<n;i++) cout<<i-pge[i]<<" ";
}