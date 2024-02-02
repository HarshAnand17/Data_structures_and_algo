 #include<bits/stdc++.h>
using namespace std;

int main() {
 int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
   int lo=0;
   int hi=n-1;
   int first=-1;
   while(lo<=hi) {
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==x) {
        first=mid;
        hi=mid-1;
    }
    else if(arr[mid]>x)  hi=mid-1;
    else lo=mid+1;
   }
   cout<<first;
}