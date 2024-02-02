#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr[]={4,1,6,2,5,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   cout<<endl;
    int i=0;
    while(i<n) {
    int ci=arr[i]-1;
         if(i!=ci) {
            swap(arr[i],arr[ci]);
         }
         else i++;    
    }
     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}