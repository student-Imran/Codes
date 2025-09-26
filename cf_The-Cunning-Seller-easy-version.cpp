#include<bits/stdc++.h>
using namespace std; 
#define ll long long int

void solve()
{
    ll n; cin>>n;
    ll ans=0;
    
    while (n>0) {
        ll pow =1, x =0;
        while (pow * 3 <= n) {
            pow *= 3;
            x++;
        }
        // cout<<pow<<'\n';
        n -= pow;
        if (pow == 1) {
            ans +=3;
            // break;
        } else {
            ans += (pow*3+x*(pow/3));
        }
    }
    
    cout<<ans<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}