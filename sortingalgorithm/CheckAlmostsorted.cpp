#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={4,2,9,7,8};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
     int brr[n];
     for(int i=0;i<n;i++) {
        brr[i]=arr[i];
     }
    
    for(int i=0;i<n-1;i++) {
            bool flag=true;
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag) {
            break;
        }
    }
    cout<<endl;
    bool flag=true;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++) {
        if(i==0) {
           if(arr[i]!=brr[i] && arr[i]!=brr[i+1]) {
            flag=false;
            break;
           }
        }
        else if(i==n-1) {
            if(arr[i]!=brr[i] &&  arr[i]!=brr[i-1]) {
            flag=false;
            break;
           }
        }
        else {
             if(arr[i]!=brr[i] &&  arr[i]!=brr[i-1] && arr[i]!=brr[i+1]) {
            flag=false;
            break;
           }
        }
  
    }
     cout<<endl;
   cout<<flag;
}