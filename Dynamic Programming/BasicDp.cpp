#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;
int fibo(int n) {
    int a=0,b=1;
    if(n==0 || n==1) return n;
    int c;
    int i=2;
    while(i<=n) {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return c;
}
int main() {
    int n;
    cout<<"enter no";
    cin>>n;
    cout<<fibo(n);
}