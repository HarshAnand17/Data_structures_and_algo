#include<iostream>
using namespace std;

int main() {

string s="Raghav is a good teacher";
    stringstream ss(s);
    string temp;
    vector<string>t;
    while(ss>>temp) {
      t.push_back(temp);
    }
    string maxW=t[0];
    for(int i=1;i<t.size();i++) {
        maxW=max(maxW,t[i]);
    }
    cout<<maxW;
}