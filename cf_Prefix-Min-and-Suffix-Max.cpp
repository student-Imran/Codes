#include<bits/stdc++.h>
using namespace std; 
void solve() {
    int n; cin >> n;
    vector<int> a(n+2);
    vector<int> p_min(n+2), s_max(n+2);
    p_min[0] = 100000000;
    vector<bool> ok(1000000, 0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        p_min[i] = min(a[i], p_min[i-1]);
        ok[p_min[i]]=true;
    }
    s_max[n+1] = -1;
    for(int i = n; i >= 1; i--) {
        s_max[i] = max(a[i], s_max[i+1]);
        ok[s_max[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(ok[a[i]]){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }cout<<'\n';
    
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
    cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

