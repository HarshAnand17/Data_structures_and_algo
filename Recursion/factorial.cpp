#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n,int s,int idx) {
    if(idx==n) return s;
    return sum(arr,n,s+arr[idx],idx+1);
}
int main() {
    int arr[]={3,1,5,9,8,2,0,5,12,9,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    cout<<sum(arr,n,s,0);
   
}