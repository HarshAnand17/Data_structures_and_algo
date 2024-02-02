#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[]={1,4,5,10,5,5,10};
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=1;i<n;i++) {
        a[i]+=a[i-1];
   }
    
    int idx=-1;
   for(int i=0;i<n;i++) {
     if(2*a[i]==a[n-1]) {
        idx=i;
        break;
     }
   }
   if(idx!=-1) cout<<"yes Partitiom exist at after "<<idx;
   else cout<<"not exist";
}