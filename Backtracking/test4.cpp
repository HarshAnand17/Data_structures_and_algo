#include<bits/stdc++.h>
using namespace std;

int main() {
     vector<int>arr={1,2,3};
     //[1,3,6];
     for(int i=1;i<arr.size();i++) arr[i]+=arr[i-1];
    int k=3;
    int count=0;
    unordered_map<int,int>map;
    
    for(int i=0;i<arr.size();i++) {
        if(arr[i]<k) {
           mp[arr[i]]=i;
        }
        else {
            if(mp.find(arr[i]-k)!=mp.end()) {
                count++;
            }
        }


    }
    cout<<count;
}