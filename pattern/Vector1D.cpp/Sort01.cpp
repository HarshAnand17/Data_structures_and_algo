#include <bits/stdc++.h>
using namespace std;
void sort01M1(vector<int>&v) {
    int i=0;
    int j=v.size()-1;
    while(i<=j) {
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else {
             swap(v[i],v[j]);
             i++;
             j--;
        }
    }
}
 void sort01M2(vector<int>&v) {
     int non=0;
     int nop=0;
     for(int i=0;i<v.size();i++) {
        if(v[i]<0) non++;
        else nop++;
     }
     for(int i=0;i<v.size();i++) {
        if(i<non) v[i]=0;
        else v[i]=1;
     }
}
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
   // v.push_back(0);
    for(int i=0;i<=v.size()-1;i++) {
        cout<<v[i]<<" ";
     }
     cout<<endl;
   // sort01M1(v);
    sort01M2(v);
     for(int i=0;i<=v.size()-1;i++) {
        cout<<v[i]<<" ";
     }
}