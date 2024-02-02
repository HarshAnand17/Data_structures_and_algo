#include<bits/stdc++.h>
using namespace std;
void DtoB( vector<int>&v,int n) {
    if(n==0)  return;
    v.push_back(n%2);
    DtoB(v,n/2);
}
int main() {
    int n;
    cin>>n;
    vector<int>v;
    DtoB(v,n);
    //reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++) cout<<v[i];
}