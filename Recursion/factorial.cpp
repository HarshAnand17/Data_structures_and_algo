#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
void fact0(int n) {
    int f=1;
  for(int i=1;i<=n;i++) {
        f*=i;
        cout<<f<<endl;
  }
 
}
int main() {
    cout<<fact(3);
}