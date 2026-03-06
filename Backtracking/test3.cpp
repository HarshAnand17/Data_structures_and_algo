#include <bits/stdc++.h>
using namespace std;

long crafting_a_stable_artifact(int k, vector<int> a) {
    sort(a.begin(), a.end());
    long m = LONG_MAX;
    int n = a.size();
    for (int i = 0; i <= n - k; i++) {
        long d = a[i + k - 1] - a[i];
        if (d < m) {
            m = d;
        }
    }
    return m;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << crafting_a_stable_artifact(k, a) << endl;
    return 0;
}