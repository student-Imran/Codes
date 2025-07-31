#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int d[n-1];
    for (int i = 1; i < n; ++i)
    {
         d[i-1]=abs(a[i]-a[i-1]);
         if (d[i-1]>1)
            {
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<'\n';
                return;
            }
         
    }
    cout<<"NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
