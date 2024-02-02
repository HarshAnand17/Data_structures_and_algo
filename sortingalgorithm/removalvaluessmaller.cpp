#include<bits/stdc++.h>
using namespace std;

int main() {
    string s="AZYZXBDJKX";
    cout<<s<<endl;
    string str="";
    for(int i=0;i<s.size();i++) {
        if(s[i]>='X') {
           str.push_back(s[i]);
        }
    }
    cout<<str<<endl;
     sort(str.begin(),str.end());
     reverse(str.begin(),str.end());
    cout<<str;
}

//    for(int i=0;i<s.size();i++) {
//        if(s[i]>='X') {
//            str.push_back(s[i]);
//        }
//    }
//    cout<<str;
      
//       cout<<endl;
//       int n=str.size();
   
//     for(int i=0;i<n-1;i++) {
//         bool flag=true;
//         for(int j=0;j<n-1-i;j++) {
//              if(str[j]<str[j+1]) {
//                // swap(arr[j],arr[j+1]);
//                int temp=str[j];
//                str[j]=str[j+1];
//                str[j+1]=temp;
//                flag=false;
//              }
//         }
//         if(flag) {
//             break;
//     }
    // cout<<endl;
    //   for(int i=0;i<n;i++) {
    //     cout<<str[i];
    // }