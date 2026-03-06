#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[]={7,5,21,2,18,4,9,3,6};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
int currSum=0;
for(int i=0;i<k;i++) {
  currSum+=arr[i];
}
int i=1;
int j=k;
int maxSum=currSum;
int maxIdx=0;
while(j<n) {
  currSum=currSum+arr[j]-arr[i-1];
  if(maxSum<currSum) {
    maxSum=currSum;
    maxIdx=i;
  }
  i++;
  j++;
}
    cout<<maxSum<<" at index "<<maxIdx;
   }
  
