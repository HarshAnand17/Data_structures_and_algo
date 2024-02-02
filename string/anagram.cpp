 #include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
   getline(cin,s);
   cout<<s<<endl;
    string t;
   getline(cin,t);
   cout<<t<<endl;
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   if(s==t) cout<<1;
   else cout<<0;
}