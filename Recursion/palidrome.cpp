#include<bits/stdc++.h>
using namespace std;
bool ispalidrome(string s) {
    int i=0;
    int j=s.size()-1;
      while(i<j) {
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    string s = "daa";
    cout<<ispalidrome(s);

}