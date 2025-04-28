#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> a(n+1), pre(n+1);
    ll s = 0;
    pre[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s += a[i];
        pre[i] = pre[i-1] + a[i];
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll now = pre[n] - pre[i-1]; 

        if (now >= x) {
            ans += k; 
        } else {
            ll need = x - now;
            ll full = (s == 0) ? 1e18 : (need + s - 1) / s;
            if (full < k) {
                ans += (k - full);
            }
        }
    }

    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
