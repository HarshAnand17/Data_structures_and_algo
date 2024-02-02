#include<iostream>
using namespace std;

int main() {
     int arr[]={1,2,3,4,5,6,7,2,8,9};
     int n=sizeof(arr)/sizeof(arr[0]);

     int sum1=(n)*(n-1)/2;
     int sum2=0;
     for(int i=0;i<n;i++) {
        sum2+=arr[i];
     }
          int diff=sum2-sum1;
          cout<<diff;
}