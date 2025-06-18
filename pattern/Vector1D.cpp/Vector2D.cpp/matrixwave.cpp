#include<bits/stdc++.h>
using namespace std;
void change2DVector(vector< vector<int>>&v) {
    v[0][0]=100;
}
void length(vector<vector<int>>&v) {
    cout<<v.size();
}
int main() {
//      int m,n;
//     cout<<"enter row & col of 1st matrix : ";
//     cin>>m>>n;
//     int a[m][n];
//     cout<<"enter element of 1st matrix : ";
//     for(int i=0;i<m;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>a[i][j];
//         }
//     }
//     cout<<endl<<endl;
//     for(int j=0;j<n;j++) {
//        // if(j%2==0) {
//         for(int i=0;i<m;i++) {
//             cout<<a[i][j]<<" ";
//         }
//     }
// //     else  {
// //          for(int i=m-1;i>=0;i--) {
// //             cout<<a[i][j]<<" ";
// //         }
// // }
// //     // cout<<endl;
// //     }

     vector<vector<int>>v;
     vector<int>v1;
      v1.push_back(1);
      v1.push_back(2);
      v1.push_back(3);

      vector<int>v2;
      v2.push_back(4);
      v2.push_back(5);

      vector<int>v3;
      v3.push_back(6);
      v3.push_back(7);
      v3.push_back(8);
      v3.push_back(9);
      v3.push_back(10);
      
      v.push_back(v1);
      v.push_back(v2);
      v.push_back(v3);

      cout<<v[0].size()<<endl;
      cout<<v[1].size()<<endl;
      cout<<v[2].size()<<endl;

    //   cout<<v[0][0]<<endl;
    //   change2DVector(v);
    //   cout<<v[0][0];
    // length(v);
    //  vector<vector<int>>v(3,vector<int>(4,20));
    //  //cout<<v.size()<<endl;
    //  for(int i=0;i<3;i++) {
    //     for(int j=0;j<4;j++) {
    //        cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    //  }
    //   cout<<endl;
    //   cout<<v.size()<<endl;
    //   cout<<v[1].size()<<endl;
}