#include<bits/stdc++.h>
using namespace std;

int main() {
int n,m;
cout<<"Enter row & column :";
cin>>n>>m;

cout<<"Enter element in the matrix :";
int a[n][m];
for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        cin>>a[i][j];
    }
}
for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
//     int minr=0;
//     int maxr=n-1;
//     int minc=0;
//     int maxc=m-1;
//     int count=0;
//     int tne=n*m;
//     while(minr<=maxr && minc<=maxc) {
//     //right
//     for(int j=minc;j<=maxc && count<tne;j++) {
//         cout<<a[minr][j]<<" ";
//         count++;
//     }
//     minr++;
//     for(int i=minr;i<=maxr && count<tne;i++) {
//         cout<<a[i][maxc]<<" ";
//         count++;
//     }
//     maxc--;
//     for(int j=maxc;j>=minc && count<tne;j--) {
//         cout<<a[maxr][j]<<" ";
//         count++;
//     }
//     maxr--;
//     for(int i=maxr;i>=minr && count<tne;i--) {
//         cout<<a[i][minc]<<" ";
//         count++;
//     }
//     minc++;
//     }
// }
   int minr=0;
   int maxr=n-1;
   int minc=0;
   int maxc=m-1;
   int count=0;
   int tne=n*m;
   count=0;
   while(minr<=maxr && minc<=maxc) {
      for(int j=minc;j<=maxc;j++) {
         cout<<a[minr][j]<<" ";
         count++;
      }
      minr++;
     // if(minr>maxr || minc>maxc) break;
      for(int i=minr;i<=maxr && count<tne;i++) {
         cout<<a[i][maxc]<<" ";
         count++;
      }
      maxc--;
     // if(minr>maxr || minc>maxc) break;
      for(int j=maxc;j>=minc && count<tne;j--) {
         cout<<a[maxr][j]<<" ";
         count++;
      }
      maxr--;
     // if(minr>maxr || minc>maxc) break;
      for(int i=maxr;i>=minr && count<tne;i--) {
         cout<<a[i][minc]<<" ";
         count++;
      }
      minc++;
   }
}