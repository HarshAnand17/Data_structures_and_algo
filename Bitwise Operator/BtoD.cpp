#include<bits/stdc++.h>
using namespace std;
int BtoD(string &s) {
    int n=s.size();
    int res=0;
    for(int i=n-1;i>=0;i--) {
        char ch=s[i];
        int num=ch-'0';
        res+=num*(1<<(n-i-1));
    }
    return res;
}
int main() {
   string s="001101";
   cout<<BtoD(s);
   return 0;
}