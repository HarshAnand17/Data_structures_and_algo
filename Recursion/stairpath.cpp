#include<bits/stdc++.h>
using namespace std;
// int stair(int n) {
//     if(n==1) return 1;
//     if(n==2) return 2;cout<<stair(4);
//     //if(n==3) return 4;
//    // return stair(n-1)+stair(n-2)+stair(n-3);
//     return stair(n-1)+stair(n-2);
// }
void stair2(int n,string s){
    if(n==0){
        cout<<s<<endl;return;
    } 
    if(n>=1)stair2(n-1,s+"1 ");
    if(n>=2)stair2(n-2,s+"2 ");
   
}
int main() {
    // for(int i=1;i<=4;i++)
    // cout<<stair(i)<<endl;
    stair2(4,"");
}