#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<vector<int>> v;
    v.push_back(a); 

    while (true) {
        vector<int> freq(n + 1, 0);  
        for (int x : v.back()) {
            freq[x]++;
        }

        vector<int> next(n);
        for (int i = 0; i < n; i++) {
            next[i] = freq[v.back()[i]];
        }

        if (next == v.back()) break; 
        v.push_back(next);
    }

    int steps = v.size();

    int q;
    cin >> q;
    while (q--) {
        int ind, k;
        cin >> ind >> k;
        if (k >= steps) k = steps - 1;
        cout << v[k][ind - 1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
