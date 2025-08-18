#include<bits/stdc++.h>
using namespace std;

int main() {
        vector<int>arr={1, 5, 1, 2, 5, 1};
        int k=3;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
        vector<int>pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++) {
            pre[i]=arr[i]+pre[i-1];
        }
        int ans=INT_MAX,prev=0;
        for(int i=0;i<n;i++) {
            if(i>0) prev=pre[i-1];
            int pos=upper_bound(arr.begin()+i,arr.end(),arr[i]+k)-arr.begin();
            cout<<pos<<" ";
            int total=(pos>0)?pre[n-1]-pre[pos-1]:0;
            int allow=(n-pos)*(arr[i]+k);
            int extra=prev+total-allow;
            ans=min(ans,extra);
        }
        cout<<endl;
        cout<<ans;
}