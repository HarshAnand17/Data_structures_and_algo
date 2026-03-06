#include <bits/stdc++.h>
using namespace std;

long detect_the_dips(vector<int> h) {
    long c = 0;
    int n = h.size();
    if (n < 3) {
        return 0;
    }
    for (int i = 1; i < n - 1; i++) {
        if (h[i] < h[i - 1] && h[i] < h[i + 1]) {
            c++;
        }
    }
    return c;
}
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    cout << detect_the_dips(h) << endl;
    return 0;
}