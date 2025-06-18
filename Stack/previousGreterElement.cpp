#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
     }

     int pge[n];
        pge[0]=-1;
        stack<int>st;
        st.push(arr[0]);
         for(int i=1;i<n;i++) {
           while(st.top()<=arr[i]) st.pop();
           if(st.size()>0) pge[i]=st.top();
           else pge[i]=-1;
           st.push(arr[i]);
        }
      cout<<endl;
       for(int i=0;i<n;i++) {
        cout<<pge[i]<<" ";
     }
     cout<<endl;
}