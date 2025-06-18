#include<iostream>
using namespace std;

int main() {
   //   int arr[]={1,2,3,4,5,6,7,2,8,9};
   //   int n=sizeof(arr)/sizeof(arr[0]);

   //   int sum1=(n)*(n-1)/2;
   //   int sum2=0;
   //   for(int i=0;i<n;i++) {
   //      sum2+=arr[i];
   //   }
   //        int diff=sum2-sum1;
   //        cout<<diff;
    string s="Raghav is a good teacher";
    stringstream ss(s);
    string temp;
    vector<string>t;
    while(ss>>temp) {
      t.push_back(temp);
    }
    string maxW=t[0];
    for(int i=1;i<t.size();i++) {
        maxW=max(maxW,t[i]);
    }
    cout<<maxW;
}