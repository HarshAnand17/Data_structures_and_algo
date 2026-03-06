#include<bits/stdc++.h>
using namespace std;
int dtob(string &s) {
     int res=0;
     int n=s.size();
     for(int i=n-1;i>=0;i--) {
         int temp=s[i]-'0';
          res=res+temp*(1<<n-i-1);
     }
     return res;
}
int main() {
     //Decimal to Binary
     int n;
     cin>>n;
     string s=to_string(n);
     cout<<DtoB(s);

}
