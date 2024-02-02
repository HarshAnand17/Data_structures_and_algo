#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   void change(vector<int>&v) {
    v[0]=100;
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
   }

int main() {
    vector<int>v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
}