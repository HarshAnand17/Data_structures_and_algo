#include<bits/stdc++.h>
using namespace std;
bool ispalidrome(string s,int i,int j) {
       if(i==j) return true;
       if(s[i]!=s[j]) return false;
      else return ispalidrome(s,i+1,j-1);
}
int main() {
    string s = "level";
    cout<<ispalidrome(s,0,s.length()-1);

}