#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>ans={4,5,-1,1,8,2,1,0,1,9,8,1};
    int n=ans.size();
    int k=3;
    int maxiSum=0,sum=0;
    for(int i=0;i<k;i++) {
        sum+=ans[i];
    }
    maxiSum=sum;
    int i=1,j=k;
    while(j<n) {
      sum=sum-ans[i-1]+ans[j];
      maxiSum=max(sum,maxiSum);
      i++;
      j++;
    }
    cout<<maxiSum;
}