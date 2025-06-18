#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "decode dsa with pw";
    vector<string>v;
    string temp="";
    for(int i=0;i<str.size();i++) {
        if(str[i]=="")  {
          if(temp!="") {
            v.push_back(temp);
          }
        }
        else temp+=str[i];
    }
    string mx=v[0];
    for(int i=1;i<v.size();i++) {
        mx=max(mx,v[i]);
    }
    cout<<mx;
}