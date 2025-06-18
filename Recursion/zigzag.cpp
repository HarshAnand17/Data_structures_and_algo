#include<bits/stdc++.h>
using namespace std;
void Permutation(string ans,string s) {
    if(s=="") {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++) {
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        Permutation(ans+s[i],left+right);
    }
}
int main() {
    string s="abc";
    Permutation("",s);
}