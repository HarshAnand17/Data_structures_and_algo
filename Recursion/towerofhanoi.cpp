#include<bits/stdc++.h>
using namespace std;
void towerOfhanoi(int n,char a,char b,char c) {
    if(n==0) return;
     towerOfhanoi(n-1,a,c,b);
    cout<<a<< "->" <<c<<endl;
     towerOfhanoi(n-1,b,a,c);

}
int main() {
    int n=3;
    towerOfhanoi(n,'A','B','C');
}
