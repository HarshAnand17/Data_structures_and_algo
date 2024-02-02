#include<bits/stdc++.h>
using namespace std;
int fact=-1; 
bool isPrime(int n) {
     if(n==1) return false; 
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0)    {
            fact=i;
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout<<"enter n :";
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<fact;
}