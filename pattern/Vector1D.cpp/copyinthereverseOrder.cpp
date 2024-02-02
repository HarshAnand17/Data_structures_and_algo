#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>v) {
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(2);
    v.push_back(8);
    v.push_back(5);

    display(v);

    vector<int>v2(v.size());
    for(int i=0;i<v.size();i++) {
       // int j=v.size()-1-i;
        v2[i]=v[v.size()-1-i];
    }
    display(v2);
}