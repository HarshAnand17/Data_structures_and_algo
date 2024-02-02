#include<bits/stdc++.h>
using namespace std;
// void printmax(int arr[],int n,int idx,int max){
//     if(idx==n) {
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//      printmax(arr,n,idx+1,max);
// }
int printMax(int arr[],int n,int idx) {
    if(idx==n) return INT_MIN;
    return max(arr[idx],printMax(arr,n,idx+1));
}
int main() {
    int arr[]={2,16,9,1,3,0,5};
     int n=sizeof(arr)/sizeof(arr[0]);
     cout<<printMax(arr,n,0);
}