#include <iostream>
#include <string>
using namespace std;

string helper(string s) {
    string decoded;
    int count = 0;
    for (char ch : s) {
        if (ch == '1') {
            count++;
            if (count == 6) { // Encounter '0' after every five consecutive '1's
                count = 0;   // Reset count
            } else {
                decoded += ch;
            }
        } else {
            decoded += ch;
            count = 0;   // Reset count if '0' is encountered
        }
    }
    return decoded;
}

int main() {
    cout << "Enter the string of 0s and 1s: ";
    string s;
    cin >> s;

    string ans;
    int count = 0;
    for (char ch : s) {
        ans += ch;
        if (ch == '1') {
            count++;
            if (count == 5) {
                ans += '0'; // Add '0' after every five consecutive '1's
                count = 0;  // Reset count
            }
        } else {
            count = 0; // Reset count if '0' is encountered
        }
    }

    cout << "Encoded Message: " << ans << endl;
    cout << "After decoding: " << helper(ans) << endl;

    return 0;
}