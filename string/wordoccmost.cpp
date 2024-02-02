#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s="ragahv is a good teacher and he is a good  mentor";
    // stringstream ss(s);
    // string temp;
    //  vector<string>v;
    // while(ss>>temp) {
    //     v.push_back(temp);
    // }
    // //for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
    // sort(v.begin(),v.end());
    // // for(int i=0;i<v.size();i++)  cout<<v[i]<<endl;
    // int maxcount=1;
    // int count=1;
    // for(int i=1;i<v.size();i++) {
    //     if(v[i]==v[i-1]) count++;
    //     else count=1;
    //     maxcount=max(maxcount,count);
    // }
    // //cout<<maxcount;
    // count=1;
    // for(int i=1;i<v.size();i++) {
    //     if(v[i]==v[i-1]) count++;
    //     else count=1;
    //     //maxcount=max(maxcount,count);
    //   if(count==maxcount) cout<<v[i]<<" "<<maxcount<<endl;
    // }

    string str="raghav is a maths teacher and He is a Dsa mentor is maths";
    stringstream ss(str);
     string temp;
     vector<string>v;
     while(ss>>temp) {
        v.push_back(temp);
     }
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
     }
     int maxcount=0;
     int count=1;
     for(int i=1;i<v.size();i++) {
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxcount<count) maxcount=count;
     }
     cout<<endl;
    // cout<<maxcount;
      count=1;
     for(int i=1;i<v.size();i++) {
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxcount==count) cout<<v[i]<<" "<<maxcount<<endl;
     }
}