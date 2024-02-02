#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[2][2];
    cout<<"enter element in the 1st matrix :";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
          cin>>a[i][j];
        }
 }
    int b[2][2];
    cout<<"enter element in the 2nd matrix :";
     for(int i=0;i<2;i++) {
       for(int j=0;j<2;j++) {
           cin>>b[i][j];
     }
}
     cout<<"matrix add of two matrix";
     cout<<endl;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"matrix sub of two matrix";
     cout<<endl;
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cout<<a[i][j]-b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix mul of two matrix";
     cout<<endl;
     int res[2][2];
     for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
             res[i][j]=0;
            for(int k=0;k<2;k++) {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
     }
      for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
}
}