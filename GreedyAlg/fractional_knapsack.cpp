#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>&p1,pair<int,int>&p2) {
     double r1=(p1.first)/p1.second;
     double r2=(p2.first)/p2.second;
     return r1>r2;
}
int fractionalKnapsack(vector<int>&p,vector<int>&w,int n,int W) {
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++) {
        arr.push_back({p[i],w[i]});
    }
    sort(arr.begin(),arr.end(),comp);
    double profit=0;
    for(int i=0;i<n;i++) {
        if(arr[i].second<W) {
           profit+=arr[i].first;
           W-=arr[i].second;
        }
        else {
            profit+=(W*1.0/arr[i].second)*arr[i].first*1.0;
           // profit+=((arr[i].first*1.0)/(arr[i].second*1.0))*W;
            W=0;
            break;
        }
    }
    return profit;
}
int main() {
    vector<int>p={60,100,120};
    vector<int>w={10,20,30};
    int W=50;
    int n=3;
    cout<<fractionalKnapsack(p,w,n,W);
}