#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;

void add_edge(int src,int dest,bool bi_dir=true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }
}

// void dfs(int node,unordered_set<int>&visited) {
//     visited.insert(node);
//     for(auto neighbour:graph[node]) {
//         if(not visited.count(neighbour)) dfs(neighbour,visited);
//     }
// }
// int connected_comp() {
//     int result=0;
//     unordered_set<int>visited;
//     for(int i=0;i<v;i++) {
//         if(visited.count(i)==0) {
//             result++;
//             dfs(i,visited);
//         }
//     }
//     return result;
// }
  void dfs(int node,unordered_set<int>&visited) {
     for(auto neighbours:graph[node]) {
        if(visited.count(neighbours)==0) {
            visited.insert(neighbours);
            dfs(neighbours,visited);
        }
     }
  }
  int connected_comp() {
      int res=0;
      unordered_set<int>visited;
      for(int i=0;i<v;i++) {
        if(visited.count(i)==0) {
            res++;
            dfs(i,visited);
        }
      }
      return res;
  }
int main() {
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--) {
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    cout<<connected_comp();
}