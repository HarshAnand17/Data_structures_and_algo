#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
     }
   //   cout<<endl;
   //   stack<int>st;
   //    int nge[n];
   //    nge[n-1]=-1;
   //    st.push(arr[n-1]);
   //    for(int i=n-2;i>=0;i--) {
   //      while(st.top()<=arr[i]) st.pop();
   //      if(st.size()==0) nge[i]=-1;
   //      else nge[i]=st.top();
   //    }
//    int nge[n];
//   nge[n-1]=-1;
//   stack<int>st;
//   st.push(arr[n-1]);
//   for(int i=n-2;i>=0;i--) {
//       while( st.size()>0 && st.top()<=arr[i]) {
//          st.pop();
//       }
//       if(st.size()==0) nge[i]=-1;
//       else nge[i]=st.top();
//       st.push(arr[i]);
//   }

       int pge[n];
       stack<int>st;
       pge[0]=-1;
       st.push(arr[0]);
       for(int i=1;i<n;i++) {
           pge[i]=st.top();
           if(arr[i]>st.top()) {
               st.pop();
               st.push(arr[i]);
           }
       }
       int nge[n];
       nge[n-1]=-1;
       stack<int>gt;
       gt.push(arr[n-1]);
       for(int i=n-2;i>=0;i--) {
           nge[i]=gt.top();
           if(arr[i]>gt.top()) {
               gt.pop();
               gt.push(arr[i]);
           }
       }
  cout<<endl;
  for(int i=0;i<n;i++) {
        cout<<pge[i]<<" ";
     }
     cout<<endl;
  for(int i=0;i<n;i++) {
        cout<<nge[i]<<" ";
     }
}


   int n=arr.size();
       int pge[n];
       stack<int>st;
       pge[0]=-1;
       st.push(arr[0]);
       for(int i=1;i<n;i++) {
           pge[i]=st.top();
           if(arr[i]>st.top()) {
               st.pop();
               st.push(arr[i]);
           }
       }
       int nge[n];
       nge[n-1]=-1;
       stack<int>gt;
       gt.push(arr[n-1]);
       for(int i=n-2;i>=0;i--) {
           nge[i]=gt.top();
           if(arr[i]>gt.top()) {
               gt.pop();
               gt.push(arr[i]);
           }
       }
        //  0 1 0 2 1 0 1 3 2 1 2 1 
        // -1 0 1 1 2 2 2 2 3 3 3 3 
        //  3 3 3 3 3 3 3 2 2 2 1 -1
          //minimum of prev and next
        int mini[n];
        for(int i=0;i<n;i++) {
            mini[i]=min(pge[i],nge[i]);
        }
        //calculating amount of water
        int water=0;
        for(int i=0;i<n;i++) {
            if(mini[i]>arr[i]) {
                water+=(mini[i]-arr[i]);
            }
        }
        return water;