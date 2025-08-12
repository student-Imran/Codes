#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;

    ll a[n], b[n], pre[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    pre[0] = b[0];
    for (int i = 1; i < n; ++i) {
        pre[i] = pre[i - 1] + b[i];
    }

    map<ll, ll> mp;
    mp[b[n - 1]] = n - 1;

    for (int i = n - 2; i >= 0; --i) {
        if (pre[i] >= b[i + 1])
            mp[b[i]] = mp[b[i + 1]];
        else
            mp[b[i]] = i;
    }

    for (int i = 0; i < n; ++i)
        cout << mp[a[i]] << ' ';
    cout << '\n';
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
