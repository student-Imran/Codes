#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    int ans=0;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    int cnt = 0;
    for (auto val : a) {
        cnt++;
        if (1LL * val * cnt >= k) {
            ans++;
            cnt = 0;
       }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
