#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
void add_edge(int src,int dest,bool bi_dir=true) {
     graph[src].push_back(dest);
     if(bi_dir) {
      graph[dest].push_back(src);
     }
}

void display() {
     for(int i=0;i<graph.size();i++) {
      cout<<i<<" -> ";
      for(auto ele:graph[i]) {
        cout<<ele<<" , ";
      }
      cout<<"\n";
     }
}
int main() {
   int v;
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--) {
      int s,d;
      cin>>s>>d;
      add_edge(s,d,false);
    }
    display();
    return 0;
}


// vector<list<int>>graph;
// int v;
// void add_edge(int src,int dest,bool bi_dir=true) {
//      graph[src].push_back(dest);
//      if(bi_dir) {
//        graph[dest].push_back(src);
//      }
// }
// void display() {
//     for(int i=0;i<graph.size();i++) {
//       cout<<i<<" -> ";
//       for(auto el:graph[i]) {
//         cout<<el<<" , ";
//       }
//       cout<<endl;
//     }
// }
// int main() {
//     cin>>v;
//     graph.resize(v,list<int>());
//     int e;
//     cin>>e;
//     while(e--) {
//       int s,d;
//       cin>>s>>d;
//       add_edge(s,d);
//     }
//     display();
// }
