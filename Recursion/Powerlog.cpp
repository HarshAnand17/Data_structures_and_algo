#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b) {
    if(b==1) return a;
    int ans=pow(a,b/2);
    if(b%2==0)  return ans*ans;
     else   return ans*ans*a;

}
int main() {
    cout<<pow(3,3);
}