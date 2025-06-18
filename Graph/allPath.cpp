#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
unordered_set<int>visit;
int v;
void add_edge(int src,int dest,bool bi_dir=true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }
}

// bool dfs(int curr,int end) {
//     if(curr==end) return true;
//     visit.insert(curr);
//     for(auto neighbour:graph[curr]) {
//         if(!visit.count(neighbour)) {
//             bool result=dfs(neighbour,end);
//             if(result) return true;
//         }
//     }
//     return false;
// }

bool dfs(int curr,int end) {
    if(curr==end) return true;
    visit.insert(curr);
     for(auto neigh:graph[curr]) {
        if(!visit.count(neigh)) {
            bool res=dfs(neigh,end);
            if(res) return true;
        }
     }
     return false;
}

bool anyPath(int src,int dest) {
    return dfs(src,dest);
}
int main() {
    cin>>v;
    graph.resize(v,list<int> ());
    int e;
    cin>>e;
    visit.clear();
    while(e--) {
      int s,d;
      cin>>s>>d;
      add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    cout<<anyPath(x,y)<<"\n";
}