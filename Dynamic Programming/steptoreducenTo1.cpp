#include<bits/stdc++.h>
using namespace std;


// int f(int n) {
//     if (n == 1) return 0;
//    // if (n == 2 || n == 3) return 1;
//     return 1 + min({f(n - 1), (n % 2 == 0) ? f(n / 2) : INT_MAX, (n % 3 == 0) ? f(n / 3) : INT_MAX});
// }

vector<int>dp;
int f(int n) {
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
   return dp[n]=1+min({(n%3==0)?f(n/3):INT_MAX,(n%2==0)?f(n/2):INT_MAX,f(n-1)});
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    dp.resize(1005,-1);
    cout << f(n) << endl;
    return 0;
}