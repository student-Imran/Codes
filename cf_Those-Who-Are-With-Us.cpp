#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    cin >> r >> c;
    int a[r][c];
    int maxi = -1;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
            maxi = max(maxi, a[i][j]);
        }
    }
    int total = 0;
    vector<int> rowcnt(r, 0), colcnt(c, 0);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == maxi) {
                rowcnt[i]++;
                colcnt[j]++;
                total++;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int cnt = rowcnt[i] + colcnt[j];
            if (a[i][j] == maxi) cnt--;
            if (cnt == total) {
                cout << maxi - 1 << '\n';
                return;
            }
        }
    }
    cout << maxi << '\n';
    
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
