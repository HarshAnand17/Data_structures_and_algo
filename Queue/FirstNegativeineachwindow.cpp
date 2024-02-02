#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0,-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=3;
    vector<int>ans;
    for(int i=0;i<n-k+1;i++) {
            bool flag=false;
           for(int j=i;j<i+k;j++) {
                if(arr[j]<0) {
                    ans.push_back(arr[j]);
                    flag=true;
                    break;
                }
           }
           if(!flag)ans.push_back(0);

    }
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
}