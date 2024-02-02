#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    int maxcount=0;
    int n=s.size();
    
    vector<int>v(26,0);
    for(int i=0;i<n;i++) {
        char ch=s[i];
        int x=(int)ch;
        v[x-97]++;
    }
    
    int mx=0;
    for(int i=0;i<26;i++) {
        if(v[i]>mx) mx=v[i];
    }
    for(int i=0;i<26;i++) {
        if(v[i]==mx) {
            int x=i+97;
            char ch=(char)x;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}