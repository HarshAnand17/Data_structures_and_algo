#include<bits/stdc++.h>
using namespace std;

void stair(int n,string s) {
    if(n==0) {
       // s+"1";
        cout<<s<<endl;
        return;
    }
    //cout<<endl;
    // else if(n==3) {
    //     s+'4';
    //     cout<<s;
    //     return;
    // }
    if(n>=1)stair(n-1,s+"1");
    if(n>=2)stair(n-2,s+"2");
    if(n>=3)stair(n-3,s+"3");
}
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    stair(n,"");
}