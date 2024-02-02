#include<bits/stdc++.h>
using namespace std;
// void subset(string ans,string str,int idx) {
//      if(idx==str.length()) {
//         cout<<ans<<endl;
//         return;
//      }
//     char ch=str[idx];
//     subset(ans+ch,str,idx+1);
//     subset(ans,str,idx+1);
// }
// int main() {
//     string str="abc";
//     subset("",str,0);
// }

void printsubset(string ans,string s,int idx ) {
        if(idx==s.length()) {
            cout<<ans<<endl;;
            return;
        }
        char ch=s[idx];
        printsubset(ans+ch,s,idx+1);
        printsubset(ans,s,idx+1); 
}
int main() {
    string s="abc";
    printsubset("",s,0);
}