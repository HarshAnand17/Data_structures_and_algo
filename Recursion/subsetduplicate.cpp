#include<bits/stdc++.h>
using namespace std;
void subset(string ans,string str,vector<string>&v,bool flag) {
     if(str=="") {
        v.push_back(ans);
        return;
    }
      char ch=str[0];
      if(str.length()==1) {
      if(flag==true) subset(ans+ch,str.substr(1),v,true);
      subset(ans,str.substr(1),v,true);
      return;
 } 
      char dh=str[1]; 
    if(ch==dh) {
          if(flag==true) subset(ans+ch,str.substr(1),v,true);
           subset(ans,str.substr(1),v,false);
       }
       
      else{
          if(flag==true) subset(ans+ch,str.substr(1),v,true);
           subset(ans,str.substr(1),v,true);
      }
}
int main() {
    string str="aaab";
     vector<string>v;
     // bool flag=true;
    subset("",str,v,true);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }
}