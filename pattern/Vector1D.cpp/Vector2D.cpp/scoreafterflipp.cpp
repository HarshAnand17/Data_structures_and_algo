#include<bits/stdc++.h>
using namespace std;

int main() {

    int m,n;
    cout<<"enter row & column : ";
    cin>>m>>n;
    int a[m][n];
     

     for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
     }

     //making the 1st column 1
     for(int i=0;i<m;i++) {
      if(a[i][0]==0) {
         for(int j=0;j<n;j++) {
            if(a[i][j]==0) a[i][j]=1;
            else a[i][j]=0;
         }
      }
     }

     //flip the columns where noz>noo
     for(int j=0;j<n;j++) {
     int noz=0;
     int noo=0;
      for(int i=0;i<m;i++) {
         if(a[i][j]==0) noz++;
         else noo++;
      }
      if(noz>noo) {
         for(int i=0;i<m;i++) {
           if(a[i][j]==0) a[i][j]=1;
           else a[i][j]=0;
         }
      }
     }
     int s=0;
     int ans=0;
     for(int i=0;i<m;i++) {
      int p=1;
      for(int j=n-1;j>=0;j++) {
          s+=a[i][j]*p;
          p*=2;
      }
     cout<<s<<" ";
     }
    
}