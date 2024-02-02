  #include<bits/stdc++.h>
  using namespace std;
  int main() {
   int m,n;
    cout<<"enter row & col of 1st matrix : ";
    cin>>m>>n;
    int a[m][n];
    cout<<"enter element of 1st matrix : ";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i==j || i+j==n-1) cout<<a[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }

  }