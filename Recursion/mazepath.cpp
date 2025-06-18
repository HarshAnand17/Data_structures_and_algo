#include<bits/stdc++.h>
using namespace std;
// int path(int sr,int sc,int er,int ec) {
//     if(sr==er && sc==ec) return 1;
//     if(sr>er || sc>ec) return 0;
//     int rightways=path(sr,sc+1,er,ec);
//     int downways=path(sr+1,sc,er,ec);
//     return rightways+downways;
// }

// void printpath(int sr,int sc,int er,int ec,string s) {
//     if(sr>er || sc>ec) return;
//      if(sr==er && sc==ec) {
//        cout<<s<<endl;
//        return;
//      }
//     printpath(sr,sc+1,er,ec,s+"R");
//     printpath(sr+1,sc,er,ec,s+"D");
//     return;
//}
int printpath(int sr,int sc) {
     if(sr==0 && sc==0) return 1;
     if(sr<0 || sc<0) return 0;;
    return printpath(sr-1,sc)+ printpath(sr,sc-1);
}

// void printpath(int sr,int sc,int m,int n,string s) {
//     if(sr>m || sc>n) return;
//     if(sr==m && sc==n) {
//          cout<<s<<endl;
//          return;
//     }
//     printpath(sr+1,sc,m,n,s+"D");
//     printpath(sr,sc+1,m,n,s+"R");
// }
int main() {
  // printpath(0,0,2,2,""); 
  printpath(1,1,3,3,"");
      // cout<<printpath(1,1,3,4); 
}