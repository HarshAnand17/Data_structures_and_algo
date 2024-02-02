#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(12);
    v.push_back(8);
    v.push_back(26);
    v.push_back(2);
    v.push_back(1);
     int x;
     cout<<"enter x : ";
     cin>>x;
      int idx=-1;
    for(int i=v.size()-1;i>=0;i--) {
        if(v[i]==x) {
        idx=i;
          break;
    }
    }
    cout<<"index is : "<<idx<<endl;
}