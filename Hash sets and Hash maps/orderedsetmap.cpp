#include<iostream>
#include<unordered_set>
#include<map>
using namespace std;

int main() {
    map<string,int>m;
    m["Raghav"]=70;
    m["Harsh"]=10;
    m["Sanket"]=50;
    for(auto x:m) {
        cout<<x.first<<" ";
    }
}