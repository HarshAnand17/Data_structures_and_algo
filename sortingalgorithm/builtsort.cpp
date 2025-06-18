#include<bits/stdc++.h>
using namespace std;
int print(int n,string s,int c) {
    if(n==0) {
      c++;
      return;
    }
      print(n-1,s+'0'); 
      if(s[s.size()-1]=='0' || s=="") print(n-1,s+'1'); 
}
int main() {
     int c=0;
     print(3,"",c);
     cout<<c;
}