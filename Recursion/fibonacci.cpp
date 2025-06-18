#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int>cost={5,3,1,2,9,4,3,10,8};
  sort(cost.begin(),cost.end(),greater<int>());
  for(int i=0;i<cost.size();i++) cout<<cost[i]<<" ";
}