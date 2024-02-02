#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>pascal(int numrows) {
    int n=numrows;
    vector<vector<int>>v;
   for(int i=1;i<=n;i++) {
      vector<int>a(i);
      v.push_back(a);
   }

   for(int i=0;i<n;i++) {
    for(int j=0;j<=i;j++) {
        if(j==0 || j==i) v[i][j]=1;
        else v[i][j]=v[i-1][j]+v[i-1][j-1];
    }
   }
   return v;
}
int main() {
   int n;
   cout<<"enter n : ";
   cin>>n;

    vector<vector<int>>v=pascal(n);
   // for(int i=1;i<=n;i++) {
   //    vector<int>a(i);
   //    v.push_back(a);
   // }

   // for(int i=0;i<n;i++) {
   //  for(int j=0;j<=i;j++) {
   //      if(j==0 || j==i) v[i][j]=1;
   //      else v[i][j]=v[i-1][j]+v[i-1][j-1];
   //  }
   // }
   for(int i=0;i<n;i++) {
    for(int j=0;j<=i;j++) {
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
}