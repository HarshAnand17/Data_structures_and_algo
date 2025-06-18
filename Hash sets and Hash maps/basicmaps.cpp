#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
   // unordered_map<string,char>m;
   // cout<<m["abhay"];
   // unordered_map<string,int>m;
   // m["harsh"]=15;
//    pair<string,int>p;
//    p.first="harsh";
//    p.second=15;
//    m.insert(p);
   // cout<<m["raghav"];
  
    // m["harsh"]=22;
    // m["sanket"]=25;
    // m["sanket"]=25;
   // cout<<m["raghav"]<<endl;
   // cout<<p.first<<" "<<p.second;
    // for(auto p:m) {
    //       cout<<p.first<<" "<<p.second<<endl;
    // }
   // cout<<m.size();
  //  m.erase("sanket");
  //  m.erase("harsh");
//      cout<<endl;
//      for(auto p:m) {
//           cout<<p.first<<" "<<p.second<<endl;
//     }
//      cout<<m.size()<<endl;
//      if(m.find("sanket")!=m.end()) {
//         cout<<"exist";
//      }
//      else cout<<"does not exist";
   //  unordered_set<int>s;
   //  s.insert(1);
   //  s.insert(2);
   //  s.insert(3);
   //  s.insert(4);
   //  s.insert(5);
   //  cout<<s.size()<<endl;
    // for(auto x:s) {
    //   cout<<x<<" ";
    // }

   //  if(s.find(9)!=s.end()) cout<<"exist";
   //  else cout<<"not exist";

   unordered_set<int>s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);
   s.insert(5);
   // auto it=s.find(9);
   // cout<<*it;
   int c=s.count(9);
}