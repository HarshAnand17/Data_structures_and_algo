#include<bits/stdc++.h>
using namespace std;
int minCostToBreakGrid(int n,int m,vector<int>&vertical,vector<int>&horizontal) {
    sort(vertical.rbegin(),vertical.rend());
    sort(horizontal.rbegin(),horizontal.rend());
    int hz=1;
    int vr=1;
    int h=0,v=0;
    int ans=0;
    while(h<horizontal.size() && v<vertical.size()) {
        if(vertical[v]>horizontal[h]) {
            ans+=vertical[v]*vr;
            hz++;
            v++;
        }
        else {
            ans+=horizontal[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<horizontal.size()) {
         ans+=horizontal[h]*hz;
            vr++;
            h++;
    }
    while(v<vertical.size()) {
        ans+=vertical[v]*vr;
            hz++;
            v++;
    }
    return ans;
}
int main() {
    int n,m;
    cin>>m>>n;
    vector<int>horizontal;
    vector<int>vertical;
    for(int i=0;i<m-1;i++) {
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0;i<n-1;i++) {
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<minCostToBreakGrid(n,m,horizontal,vertical)<<"\n";
}