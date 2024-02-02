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


  
   // vector<int>v(5,8);
   //   cout<<v.size()<<endl;
   //   cout<<v.capacity()<<endl;
   //   cout<<v[4];

    
    vector<int>v;
     v.push_back(9);
     v.push_back(10);
     v.push_back(6);
     v.push_back(1);
   //  v.at(2)=90;
     for(int i=0;i<v.size();i++) {
      cout<<v.at(i)<<" ";
     }
     cout<<endl;
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++) {
      cout<<v.at(i)<<" ";
     }
    //cout<<v.at(2);
}