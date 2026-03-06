#include <bits/stdc++.h>
using namespace std;

int treasure_trail_count(vector<vector<int>> g) {
    int n = g.size();
    if (n == 0) {
        return 0;
    }
    vector<pair<int, int>> p(n * n + 1);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            p[g[i][j]] = {i, j};
        }
    }
    
    int t = 0;
    for (int i = 1; i < n * n; ++i) {
        auto c1 = p[i];
        auto c2 = p[i + 1];
        t += abs(c1.first - c2.first) + abs(c1.second - c2.second);
    }
    return t;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> g[i][j];
        }
    }
    cout << treasure_trail_count(g) << endl;
    return 0;
}