#include<bits/stdc++.h>
using namespace std;
void subset(int arr[],int i,vector<int>&v,int n) {
     if(i==n) {
       for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
     }
     if(arr[i]!=1) v.push_back(arr[i]);
     subset(arr,i+1,v,n);

}
int main() {
     int arr[]={2,3,1,6,9,8,1,1,5,1,1};
     int n=sizeof(arr)/sizeof(arr[0]);
     vector<int>v;
     subset(arr,0,v,n);
}