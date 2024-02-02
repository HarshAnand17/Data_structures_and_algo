#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={5,3,1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
  int k=2;
   for(int i=0;i<k;i++) {
   int minEle=INT_MAX;
   int minIdx=-1;
      for(int j=i;j<n;j++) {
        if(minEle>arr[j]) {
           minEle=arr[j];
            minIdx=j;
        }
      }
      swap(arr[i],arr[minIdx]);
   }
   cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];

//     for(int i=0;i<n-1;i++) {
//      int min=INT_MAX;
//      int minIdx=-1;
//      for(int j=i;j<n;j++) {
//         if(arr[j]<min) {
//             min=arr[j];
//             minIdx=j;
//         }
//      }
//      swap(arr[i],arr[minIdx]);
//    }
//        cout<<endl;
//         for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }

}