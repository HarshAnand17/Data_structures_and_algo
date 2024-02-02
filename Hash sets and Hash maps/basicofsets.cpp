#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    //s.erase(2);
    int tar=8;
     cout<<s.size()<<endl;
    for(auto ele:s) {
        cout<<ele<<" ";
    }
     cout<<endl;
    if(s.find(tar)!=s.end()) {
         cout<<"exist";
    }
    else cout<<"does not exist";
    // int target=40;
    // if(s.find(target)!=s.end()) {
    //     cout<<"exist"<<endl;
    // }
    // else cout<<"Not exist"<<endl;
    // cout<<s.size()<<endl;
    // //for each loop
    // for(int ele:s) {
    //     cout<<ele<<" ";
    // }
}


