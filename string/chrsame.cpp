#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
   getline(cin,s);
   cout<<s<<endl;
   
   int count=1;
   int maxcount=1;

   for(int i=1;i<s.length();i++) {
    if(s[i]==s[i-1]) count++;
    else count=1;
    maxcount=max(count,maxcount);
   }
   //cout<<maxcount;
   count=1;
   for(int i=1;i<s.length();i++) {
    if(s[i]==s[i-1]) count++;
    else count=1;
   if(count==maxcount) cout<<s[i]<<" "<<maxcount<<endl;
   }
}