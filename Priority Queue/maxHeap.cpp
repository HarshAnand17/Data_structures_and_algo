#include<bits/stdc++.h>
using namespace std;
// class MaxHeap {
//     vector<int>hp;
//     int i;
// public:
//    void unheapify(int ci) {
//         while(ci>0) {
//             int pi=(ci-1)/2;
//             if(hp[pi]<hp[ci]) {
//                 swap(hp[ci],hp[pi]);
//                 ci=pi;
//             }
//             else break;
//         }
//    }
//    void downheapify(int idx) {
//         while(idx<hp.size()) {
//             int lc=2*idx+1;
//             int rc=2*idx+2;
//             if(lc>=hp.size()) break;
//             int maxEl=idx;
//             if(hp[lc]>hp[maxEl]) maxEl=lc;
//             if(rc<hp.size() and hp[rc]>hp[maxEl]) maxEl=rc;
//             if(maxEl!=idx) {
//                 swap(hp[idx],hp[maxEl]);
//                 idx=maxEl;
//             }
//             else break;
//         }
//    }
//    void pop() {
//     if(empty()) return;
//     swap(hp[0],hp[hp.size()-1]);
//     hp.pop_back();
//     if(!empty()) downheapify(0);
//    }

//    void push(int element) {
//     hp.push_back(element);
//     unheapify(hp.size()-1);
//    }
//    bool empty() {
//     return hp.size()==0;
//    }
//    int peek() {
//     if(empty()) return INT_MIN;
//     return hp[0];
//    }
//    void display() {
//     cout<<"[";
//     for(int i=0;i<hp.size();i++) {
//         cout<<hp[i]<<" ";
//     }
//     cout<<"]\n";
//    }
//    MaxHeap(vector<int>v) {
//     hp=v;
//     int n=hp.size();
//     for(int i=n/2;i>=0;i--) {
//         downheapify(i);
//     }
//    }
// };
// int main() {
//     vector<int>v={9,6,1,19,3,2,8,12,5};
//     MaxHeap hp(v);
//     hp.display();
//     hp.push(100);
//     hp.display();
//     return 0;
//}
  int main() {
  pair<int,int>p={1,2};
  cout<<p.first<<" "<<p.second;

  cout<<endl;
  pair<int,pair<int,int>>p={1,{2,4}};
  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
  cout<<endl;
  pair<int,int>arr[]={{1,2},{3,5},{5,9}};
  cout<<arr[1].first;
  }