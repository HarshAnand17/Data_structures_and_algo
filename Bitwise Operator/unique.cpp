#include<bits/stdc++.h>
using namespace std;

int main() {
   int arr[]={4,4,1,3,2,3,10,1,2};
   int n=9;
   int result=0;
   for(int i=0;i<n;i++) {
      result^=arr[i];
   }
   cout<<result;
}