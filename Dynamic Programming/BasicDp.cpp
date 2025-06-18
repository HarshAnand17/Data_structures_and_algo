#include<iostream>
#include<vector>
using namespace std;

// vector<int> dp;
// int fibo(int n) {
//     int a=0,b=1;
//     if(n==0 || n==1) return n;
//     int c;
//     int i=2;
//     while(i<=n) {
//         c=a+b;
//         a=b;
//         b=c;
//         i++;
//     }
//     return c;
// }
vector<int>dp;
int fibo(int n) {
    if(n==0 || n==1) return n;
     dp[0]=0;
     dp[1]=1;
     for(int i=2;i<=n;i++) {
      dp[i]= dp[i-1]+dp[i-2];
     }
     return dp[n];
}
int main() {
    int n;
    cin>>n;
    if(n==0 || n==1) return n;
    int a=0;
    int b=1;
    int c=0;
   int i=2;
   while(i<=n) {
       c=a+b;
       a=b;
       b=c;
       i++;
   }
   cout<<c;
}

