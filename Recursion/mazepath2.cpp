#include<bits/stdc++.h>
using namespace std;
int path(int n,int m) {
    int rightway=0;
    int downway=0;
    if(n==1 && m==1) return 1;
    else if(n==1) rightway+=path(n,m-1);
    else if(m==1) downway+=path(n-1,m);
    else if(n>1 && m>1) {      
    rightway+=path(n,m-1);
    downway+=path(n-1,m); 
    }
    int totalway=rightway+downway;
    return totalway;
}
int main() {
   cout<<path(4,4);
}