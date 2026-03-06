#include<bits/stdc++.h>
using namespace std;
// string DtoB(int n) {
//        string res;
//        while(n>0) {
//            if(n%2==0) res="0"+res;
//            else res="1"+res;
//            n/=2;
//        }
//        return res;
// }
// string DtoB(int n) {
//     string res;
//     while(n>0) {
//         if(n%2==0) res='0'+res;
//         else res='1'+res;
//         n=n>>1;
//     }
//     return res;
//}
string DtoB(int n) {
     string result;
     while(n>0) {
        if(n%2==0) {
           result='0'+result;
        }
        else {
           result='1'+result;
        }
        n=n>>1;
     }
     return result;
}
int main() {
    cout<<DtoB(18);
     return 0;
}