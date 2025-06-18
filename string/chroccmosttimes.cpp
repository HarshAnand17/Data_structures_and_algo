#include<bits/stdc++.h>
using namespace std;

int main() {
    string s="Raghav is a good teacher";
    stringstream ss(s);
    string temp;
    while(ss>>temp) {
        cout<<temp<<endl;
    }
}