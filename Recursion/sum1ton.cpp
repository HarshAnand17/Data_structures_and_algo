// #include<bits/stdc++.h>
using namespace std;
void sum2(int sum,int n) {
  if(n==0) return;
  sum2(sum+n,n-1);
}
int main() {
    sum2(0,10);
}


