#include<bits/stdc++.h>
using namespace std;
// int sod1(int n,int sum) {
//     if(n==0) return sum;
//     return sod1(n/10,sum+=(n%10));

//     int sod1(int n) {
//     if(n<10) return n;
//     return (n%10) + sod1(n/10);
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<sod1(n);
// }
void helper(string s,string ans) {
    if(s=="") {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++) {
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        helper(left+right,ans+ch);
    }
}
int main() {
    helper("abc","");
}