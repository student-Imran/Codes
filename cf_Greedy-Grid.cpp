#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n,m;cin>>n>>m;
   if((n==1 or m==1 ) or (n==2 and m==2)){
    cout<<"NO\n";
   }
   else{
    cout<<"YES\n";
   }
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