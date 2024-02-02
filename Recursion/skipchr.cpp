#include<bits/stdc++.h>
using namespace std;

int main() {
    string str="raghav garg";
    string s="";
    for(int i=0;i<str.size();i++) {
        if(str[i]!='a') s.push_back(str[i]);
    }
    cout<<s;
}