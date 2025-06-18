#include<bits/stdc++.h>
using namespace std;

int main() {
//     int m,n;
//     cout<<"enter row & col of 1st matrix : ";
//     cin>>m>>n;
//     int a[m][n];
//     cout<<"enter element of 1st matrix : ";
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>a[i][j];
//         }
//     }
//     int p,q;
//     cout<<"enter row & col of 2nd matrix : ";
//     cin>>p>>q;

//      int b[p][q];
//     cout<<"enter element of 2nd matrix : ";
//     for(int i=0;i<p;i++) {
//         for(int j=0;j<q;j++) {
//             cin>>b[i][j];
//         }
//     }

//     if(n!=p) cout<<"matrix mul not possible";
//     else {
//         int res[m][q];
//         for(int i=0;i<m;i++) {
//             for(int j=0;j<q;j++) {
//                 res[i][j]=0;
//                 for(int k=0;k<p;k++) {
//                    res[i][j]+=a[i][k]*b[k][j];
//                 }
//             }
//         }
//         cout<<endl<<endl;
//         cout<<"Matrix mul is given below";
//           cout<<endl<<endl;
//      for(int i=0;i<m;i++) {
//             for(int j=0;j<q;j++) {
//                 cout<<res[i][j]<<" ";
//             }
//             cout<<endl;
//     }
            
// }
   int m,n;
   cout<<"enter row and column of 1st matrix :";
   cin>>m>>n;
   cout<<"Enter element in the 1st matrix :";
   int arr[m][n];

   for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) {
      cin>>arr[i][j];
    }
   }
   cout<<endl;
   int p,q;
   cout<<"enter row and column of 2nd matrix :";
   cin>>p>>q;

   cout<<"Enter element in the 2nd matrix :";
   int brr[p][q];

   for(int i=0;i<p;i++) {
    for(int j=0;j<q;j++) {
      cin>>brr[i][j];
    }
   }
   if(n!=p) cout<<"Matrix multiplication is not possible";
   else {
   int res[m][q];
    for(int i=0;i<m;i++) {
      for(int j=0;j<q;j++) {
        res[i][j]=0;
        for(int k=0;k<p;k++) {
          res[i][j]+=arr[i][k]*brr[k][j];
        }
      }
    }
   for(int i=0;i<m;i++) {
    for(int j=0;j<q;j++) {
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
   }
   }
}
