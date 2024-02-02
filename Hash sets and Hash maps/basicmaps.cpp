#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string,int>m;
   // m["harsh"]=15;
//    pair<string,int>p;
//    p.first="harsh";
//    p.second=15;
//    m.insert(p);
    m["raghav"]=52;
    m["harsh"]=22;
    m["sanket"]=25;
    m["sanket"]=25;
   // cout<<m["raghav"]<<endl;
   // cout<<p.first<<" "<<p.second;
    for(auto p:m) {
          cout<<p.first<<" "<<p.second<<endl;
    }
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
}