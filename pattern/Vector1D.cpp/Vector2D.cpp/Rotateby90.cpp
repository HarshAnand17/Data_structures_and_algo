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
     for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl<<endl;
     for(int i=0;i<m;i++) {
      for(int j=i+1;j<n;j++) {
         swap(a[i][j],a[j][i]);
      }
     }

     //reverse each row column
      for(int k=0;k<m;k++) {
         int i=0;
         int j=n-1;
         while(i<=j) {
            swap(a[k][i],a[k][j]);
            i++;
            j--;
         }
      }
      for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
}
