#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[]={7,5,1,2,8,4,9,3,6};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
int prevSum=0;

for(int i=0;i<k;i++) {
  prevSum+=arr[i];
}
int i=1;
int j=k;
int maxSum=0;
int maxIdx=-1;
while(j<n) {
  int currSum=prevSum+arr[j]-arr[i-1];
   if(maxSum<currSum) {
  maxSum=currSum;
  maxIdx=i;
    }
  prevSum=currSum;
  i++;
  j++;
}
    cout<<maxSum<<" at index "<<maxIdx;
   }
