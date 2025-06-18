#include<bits/stdc++.h>
using namespace std;
void print(int n) {
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
          if(i!=n/i) cout<<i<<" ";
        }  
    }
    for(int i=sqrt(n);i>=1;i--) {
        if(n%i==0)   cout<<n/i<<" ";   
    }
}
int main() {
  print(60);
}