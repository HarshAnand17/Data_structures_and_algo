#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
   int nsp=n+1;
     for(int i=1;i<=n;i++) {
       for(int j=1;j<=i-1;j++) {
           cout<<" ";
   } 
   cout<<"*";
       for(int j=1;j<=nsp;j++) {
           cout<<" ";
   } 
   nsp-=2;
   if(i!=n) cout<<"*";
     cout<<endl;
   }
}