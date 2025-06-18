#include<bits/stdc++.h>
using namespace std;
// void combination(vector<int>v,int arr[],int n,int target,int idx) {
//       if(target==0) {
//         for(int i=0;i<v.size();i++) {
//           cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//       }
//       if(target<0) return;
//       for(int i=idx;i<n;i++)  {
//          v.push_back(arr[i]);
//          combination(v,arr,n,target-arr[i],i);
//          v.pop_back();
//       }
// }
// int main() {
//     int arr[]={2,3,5};
//     int n=3;
//     vector<int>v;
//     combination(v,arr,n,8,0);
// }

void helper(string s,int n) {
     if(n==0) {
      cout<<s<<endl;
      return;
     }
     helper(s+'0',n-1);
     if(s=="" || s.back()=='0') helper(s+'1',n-1);
    s.pop_back();
}
int main() {
    int n=3;
    helper("",n);
}