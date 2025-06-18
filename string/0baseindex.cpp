#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="physicswallah";
    int n=s.size();
    int count;
    int maxcount=0;
    char ch;
    for(int i=0;i<n-1;i++) {
      count=1;
       for(int j=i+1;j<n;j++) {
            if(s[i]==s[j]) count++;
       }
       if(maxcount<count) {
        maxcount=count;
       }
    }

    for(int i=0;i<n-1;i++) {
      count=1;
      char ch=s[i];
       for(int j=i+1;j<n;j++) {
            if(s[i]==s[j]) count++;
       }
       if(count==maxcount) {
        maxcount=count;
       cout<<count<<" "<<ch<<endl;
       }
    }  
}