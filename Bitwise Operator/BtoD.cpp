#include<bits/stdc++.h>
using namespace std;
// int BtoD(string &s) {
//     int n=s.size();
//     int res=0;
//     for(int i=n-1;i>=0;i--) {
//         int num=s[i]-'0';
//         res=res+num*(1<<(n-i-1));
//     }
//     return res;
// }
int dtob(string s) {
     int res=0;
     int n=s.size();
     for(int i=n-1;i>=0;i--) {
         int temp=s[i]-'0';
          res=res+temp*(1<<n-i-1);
     }
     return res;
}
int main() {
     //decimal to binary
     // int n;
     // cout<<"Enter a no : ";
     // string s=to_string(n);
     string s="1001011";
     cout<<dtob(s);
     

}
