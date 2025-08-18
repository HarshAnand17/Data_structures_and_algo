#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
    queue<int>q;
    for(int i=0;i<n;i++) {
      if(arr[i]<0) q.push(i);
    }
    int k=3;
    vector<int>ans(n-k+1);
    for(int i=0;i<=n-k;i++) {
       while(q.size()>0 && q.front()<i) q.pop();
       if(q.front()>=i+k) ans[i]=0;
       else ans[i]=arr[q.front()];
    }
    cout<<endl;
    for(int i=0;i<=n-k;i++) cout<<ans[i]<<" "; 
}