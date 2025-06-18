#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main() {
    priority_queue<int>q;//maxheap
   priority_queue<pair<int,int,vector<pair<int,int>>,greater<pair<int,int>>>hp;
    //  vector<int>v = {9,6,1,19,3,2,8,12,5};
    //  int arr[] = {9,6,1,19,3,2,8,12,5};
   // priority_queue<int>hp;
  //    priority_queue<int,vector<int>, greater<int>>hp;
  //    priority_queue<int,vector<int>, greater<int>>minhpvector(v.begin(),v.end());
  //    priority_queue<int> maxhparray(arr,arr+9);
  //    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

  //   hp.push(3);
  //   hp.push(4);
  //   hp.push(11);
  //   hp.push(9);
  //   hp.push(14);
  //   hp.push(-1);
  //   hp.push(30);
  //   hp.push(44);
  //   hp.push(50);
   
  //  cout<<hp.top()<<endl;
  //  cout<<minhpvector.top()<<"\n";
  //   cout<<maxhparray.top()<<"\n";


    vector<int>enemyE={1};
     int n = enemyE.size();
    int currentE=10;
   priority_queue<long long,vector<long long>, greater<long long>>hp(enemyE.begin(),enemyE.end());
    long long points = 0;
    
        while(!hp.size()) {
            int x=hp.top();
        if (currentE >= x) {
            currentE -= x;
            points++;
            hp.push(x);
        } else if (points > 0) {
            currentE += x;
            hp.pop();
        }
    }
    cout<<points;
}