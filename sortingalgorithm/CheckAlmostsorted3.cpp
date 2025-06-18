#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={4,2,8,7,9};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n-1;i++) {
          if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
            i++;
          }
     }
     bool flag=true;
     for(int i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            flag=false;
            break;
        }
     }
      if(flag==false) cout<<"element is not sorted";
    else cout<<"element is sorted";
}      