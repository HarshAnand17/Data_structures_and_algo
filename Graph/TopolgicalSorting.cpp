#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int src,int dest,bool dir=true) {
    graph[src].push_back(dest);
    if(dir) {
        graph[dest].push_back(src);
    }
}
void topoBfs() {
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++ ){
        for(auto neigh:graph[i]) {
            indegree[neigh]++;
        }
    }
    queue<int>q;
    unordered_set<int>visited;
    for(int i=0;i<v;i++) {
        if(indegree[i]==0) {
            q.push(i);
            visited.insert(i);
        }
    }
    cout<<"starting bfs "<<endl;
    while(!q.empty()) {
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto neigh:graph[node]) {
            if(!visited.count(neigh)) {
                indegree[neigh]--;
                if(indegree[neigh]==0) {
                    q.push(neigh);
                    visited.insert(neigh);
                }
            }
        }
    }
}
int main() {
   cin>>v;
   int e;
   cin>>e;
   graph.resize(v,list<int>());
   while(e--) {
    int s,d;
    cin>>s>>d;
    add_edge(s,d,false);
   }
   topoBfs();
}