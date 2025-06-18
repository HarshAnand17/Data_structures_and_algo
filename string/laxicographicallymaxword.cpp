#include<bits/stdc++.h>
using namespace std;

int main() {
    // vector<string>v;
    // int n=5;
    // while(n--){
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
//    for(int i=0;i<5;i++){
//         string s;
//         cin>>s;
//         v.push_back(s);
//     }
//     sort(v.begin(),v.end());
//     cout<<v[v.size()-1]<<endl;

// m-2 without sorting
//    for(int i=0;i<5;i++){
//         string s;
//         cin>>s;
//         v.push_back(s);
//     }
//     string max=v[0];
//     for(int i=0;i<n;i++) {
//         if(max<v[i]) max=v[i];
//     }
//     cout<<max;
    

    //m-3;
    string s="raghav is a good teacher and dsa mentor";
    vector<string>w;
    string temp="";
    for(int i=0;i<s.length();i++) {
        if(s== "") {
          if(temp!="") {
            w.push_back(temp);
            temp="";
          }
        }
        else temp+=s[i];
    }
    sort(w.begin(),w.end());
    cout<<w[w.size()-1];

    return 0;
}