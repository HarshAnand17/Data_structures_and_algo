#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the String" << endl;
    string s;
    cin >> s;
    string ans = "";
    int n = s.length();
    for (int i = 0; i <= n - 3; i++) {
        char ch = s[i];
        if (s.substr(i, 3) == "DLE") {
            ans += "DLE";
        }
        ans += ch;
    }
    ans += s.substr(n - 3); // Corrected indexing here
    ans = "DLESTX" + ans + "DLEETX";
    cout << ans << endl;
    return 0;
}