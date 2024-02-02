#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    cout<<"enter element in the array :";
    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

      int x;
      cout<<"enter want to search : ";
      cin>>x;
      bool flag=false; //means element is not present
    for(int i=0;i<n;i++) {
        if(arr[i]==x) flag=true;
    }

    if(flag==true) cout<<"yes element is present";
    else cout<<"not present";
}