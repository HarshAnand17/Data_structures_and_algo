#include<bits/stdc++.h>
using namespace std;
void subset(string s,string str,vector<string>&v,bool flag) {
      if(str=="") {
        v.push_back(s);
        return;
      }
      char ch=str[0];
      char dh=str[1];
      if(str.size()==1) {
        if(flag==true) subset(s+ch,str.substr(1),v,true);
        subset(s,str.substr(1),v,true);
        // return;
      }
       else if(ch==dh) {
        if(flag==true) subset(s+ch,str.substr(1),v,true);
        subset(s,str.substr(1),v,false);
      }
      else {
        if(flag==true) subset(s+ch,str.substr(1),v,true);
        subset(s,str.substr(1),v,true);
      }
}
int main() {
    string str="aaab";
    vector<string>v;
    subset("",str,v,true);
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }
    }