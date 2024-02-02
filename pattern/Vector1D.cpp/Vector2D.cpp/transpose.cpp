#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cout<<"enter row & column : ";
    cin>>n>>m;
    int a[n][m];
    cout<<"enter element in the matrix : ";
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
    cout<<endl<<endl;
    int t[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
           t[i][j]=a[j][i];
        }
        cout<<endl;
    }
     cout<<endl<<endl;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
