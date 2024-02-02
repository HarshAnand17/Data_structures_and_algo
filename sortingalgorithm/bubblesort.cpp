#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={5,-4,0,3,26,1,99,-80};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
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
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    

   
//     for(int i=0;i<n-1;i++) {
//         bool flag=true;
//         for(int j=0;j<n-1-i;j++) {
//              if(arr[j]>arr[j+1]) {
//                // swap(arr[j],arr[j+1]);
//                int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//                flag=false;
//              }
//         }
//         if(flag) {
//             break;
//     }
//  }
//     cout<<endl;
//       for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }

    // for(int i=0;i<n-1;i++) {
    //     for(int j=0;j<n-1-i;j++) {
    //          if(arr[j]>arr[j+1]) {
    //            // swap(arr[j],arr[j+1]);
    //            int temp=arr[j];
    //            arr[j]=arr[j+1];
    //            arr[j+1]=temp;
    //          }
    //     }
    // }
    // cout<<endl;
    //   for(int i=0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
        
    //     for(int i=0;i<n-1;i++) {

    //       bool flag=true;
    //       for(int j=n-1;j>=1+i;j--) {
    //            if(arr[j]>arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //               flag=false;
    //             }
    //            }
    //            if(flag==false) break;
    //       }
    //        cout<<endl;
    //      for(int i=0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }

}

