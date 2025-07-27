#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll n;cin>>n;
    vector<vector<ll>> v(n, vector<ll>(4));
    ll ans=0;
    for (int i = 0; i < n; ++i)
    {
    	 cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
    	 
    	 if(v[i][1]>v[i][3]){
    	 	if(v[i][0]>0 and v[i][2]>0){
    	 		ans+=abs(v[i][1]-v[i][3]);
    	 		ans+=min(v[i][0],v[i][2]);
    	 	}
    	 	else{
    	 		ans+=abs(v[i][1]-v[i][3]);
    	 	}
    	 }
    	 if(v[i][0]>v[i][2]){
    	 	ans+=abs(v[i][0]-v[i][2]);
    	 }
        // cout<<ans<<'\n';
    }	 
    cout<<ans<<'\n';
    
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