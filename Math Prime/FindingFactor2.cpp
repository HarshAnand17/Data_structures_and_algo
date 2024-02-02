#include<bits/stdc++.h>
using namespace std;

void PrintFactors(int n) {
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        }
    }
}
int main() {
    int n;
    cout<<"enter n :";
    cin>>n;
    PrintFactors(n);
}