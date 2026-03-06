#include<bits/stdc++.h>
using namespace std;
vector<list<int>>v;
void add_edge(int src,int dest,bool dir=true) {
     v[src].push_back(dest);
     if(dir==true) {
       v[dest].push_back(src);
     }
}
void display() {
    for(int i=0;i<v.size();i++) {
      cout<<i<<" -> ";
        for(auto x:v[i]) {
           cout<<x<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n,e;
    cin>>n>>e;
    v.resize(n,list<int>());
    while(e--) {
      int s,d;
      cin>>s>>d;
      add_edge(s,d);
    }

    display();
}


