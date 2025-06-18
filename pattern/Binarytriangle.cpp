#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int f=-1;
    int L=-1;
    while(n>0) {
        int l=n%10;
        if(L==-1) {
            L=l;
        }
        else f=l;
        n/=10;
    }
    cout<<f<<" "<<L;
}