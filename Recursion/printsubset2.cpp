#include<bits/stdc++.h>
using namespace std;
void subset(string ans,string str,int idx,vector<string>&v) {
     if(idx==str.length()) {
        v.push_back(ans);
        return;
     }
    char ch=str[idx];
    subset(ans,str,idx+1,v);
    subset(ans+ch,str,idx+1,v);
}
int main() {
    vector<string>v;
    string str = "abcd";
    subset("",str,0,v);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<"\n";
    }
}