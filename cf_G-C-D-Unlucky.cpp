#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> p(n), s(n);
    for (int i = 0; i < n; i++)
    {
      cin >> p[i];
    } 
      
    for (int i = 0; i < n; i++)
    {
     cin >> s[i];
    }

    if (p.back() != s.front()) {
        cout << "No\n";
        return;
    }

    for (int i = 0; i < n-1; i++) {
        if (p[i] % p[i+1] != 0) {
            cout << "No\n";
            return;
        }
        if (s[i+1] % s[i] != 0) {
            cout << "No\n";
            return;
        }
    }
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        ll g = gcd(p[i], s[i]);
        a[i] = (p[i] / g) * s[i];
    }

    vector<ll> pre(n);
    pre[0] = a[0];
    if (pre[0] != p[0]) {
        cout << "No\n";
        return;
    }
    for (int i = 1; i < n; i++) {
        pre[i] = gcd(pre[i-1], a[i]);
        if (pre[i] != p[i]) {
            cout << "No\n";
            return;
        }
    }

    vector<ll> suf(n);
    suf[n-1] = a[n-1];
    if (suf[n-1] != s[n-1]) {
        cout << "No\n";
        return;
    }
    for (int i = n-2; i >= 0; i--) {
        suf[i] = gcd(a[i], suf[i+1]);
        if (suf[i] != s[i]) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}