#include <bits/stdc++.h>
using namespace std;
// void print(int n) {
//    if(n==0) return;
//    print(n-1);
//    cout<<n<<" ";
// }
// void print(int i,int n) {
//    if(i>n) return;
//    cout<<i<<" ";
//    print(i+1,n);
// }
// int f(int i,int n) {
//    if(n==0) return i;
//    return f(i+n,n-1);
// }

// int f(int n) {
//    if(n==1) return 1;
//    return n+f(n-1);
// }
// int main() {
//    cout<<f(10);
// int main()
// {
   //   int arr[]={1,1,2,3,3,4,4,4,5,5,5,6,7,7,9,10,10};
   //   int x=1;
   //   int n=sizeof(arr)/sizeof(arr[0]);
   //   int lo=0;
   //   int hi=n-1;
   //   int ans=-1;
   //   while(lo<=hi) {
   //    int mid=lo+(hi-lo)/2;
   //    if(arr[mid]==x) {
   //        ans=mid;
   //        lo=mid+1;
   //    }
   //    else if(arr[mid]<x) lo=mid+1;
   //    else hi=mid-1;
   //   }
   //   cout<<ans;


//    int arr[] = {0, 0, 0, 0, 0, 0};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int lo = 0;
//    int hi = n - 1;
//    int ans = -1;
//    while (lo <= hi) {
//       int mid = lo + (hi - lo) / 2;
//       if (arr[mid] == 0) {
//          ans = mid;
//          lo = mid + 1;
//       }
//       else  hi = mid - 1;
//    }
//   cout<<n-(ans+1);
// }

// void dtoB(int n,vector<int>&v) {
//      if(n==0) {
//          return;
//       }
//      dtoB(n/2,v);
//      v.push_back(n%2);
// }
// int main() {
//     vector<int>v;
//     dtoB(4,v);
//     for(int i=0;i<v.size();i++) {
//       cout<<v[i]<<" ";
//     }
// }
// int sumofdigit(int ans,int n) {
//     if(n==0) return ans;
//     return sumofdigit(ans+n%10,n/10);
// }
void f(vector<int>&arr,int n) {
     if(n==0) return;
     vector<int>temp(n-1);
     for(int i=0;i<n;i++) {
      cout<<arr[i]<<" ";
      if(i!=0) temp[i-1]=arr[i-1]+arr[i];
     }
     cout<<endl;
     f(temp,n-1);
}
int main() {
    vector<int>arr={5,4,3,2,1};
    int n=arr.size();
    f(arr,n);
}