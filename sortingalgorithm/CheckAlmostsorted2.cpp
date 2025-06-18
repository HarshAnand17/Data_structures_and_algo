#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={4,2,7,9,8};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag=true;
    for(int i=0;i<n;i++) {
        int c=0;
        for(int j=0;j<n;j++) {
            if(arr[j]>arr[i]) c++;
        }
        int aidx=n-c-1;
        int diff=abs(i-aidx);
        if(diff>1) {
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<"element is not sorted";
    else cout<<"element is sorted";
}      