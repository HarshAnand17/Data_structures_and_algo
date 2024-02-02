#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    int maxcount=0;
    int n=s.size();
    for(int i=0;i<n;i++) {
    int count=1;
        for(int j=i+1;j<n;j++) {
            if(s[i]==s[j]) count++;
        }
        if(count>maxcount) maxcount=count;
    }
        for(int i=0;i<n;i++) {
        int count=1;
        for(int j=i+1;j<n;j++) {
            if(s[i]==s[j]) count++;
        }
        if(count==maxcount) cout<<s[i]<<" "<<maxcount<<endl;
    }
}