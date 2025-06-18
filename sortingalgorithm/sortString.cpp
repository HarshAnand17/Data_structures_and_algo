#include<bits/stdc++.h>
using namespace std;

int main() {
    string str =  "hgdhpw";
    int n=str.size();
    int j=0;
    int l=0;
    int ans=0;
    while(j<n) {
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u') {
            l++;
        } 
        else {
            ans=ans+(l*(l+1))/2;
            l=0;       
    }
    j++;
    }
    ans+=(l*(l+1))/2;
    cout<<ans;
}