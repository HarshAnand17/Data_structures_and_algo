#include<bits/stdc++.h>
using namespace std;

int main() {
//     string s;
//    getline(cin,s);
//    long long x=stoll(s);
//    cout<<x;
   string str ="Raghav is a faclty at pw";
   vector<string>word;
   string temp="";
   for(int i=0;i<str.size();i++) {
        if(str[i]=="") {
          if(temp!=" ") {
            word.push_back(temp);
            temp="";
          }
        }
        else temp+=str[i];
   }
   sort(word.begin(),word.end());
   for(int i=0;i<word.size();i++) {
      cout<<word[i]<<" ";
   }
}