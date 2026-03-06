#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=1,b=1;
    int sum;
    for(int i=1;i<=n;i++) {
       count<<a<<" ";
       sum=a+b;
       a=b;
       b=sum;
    }
}