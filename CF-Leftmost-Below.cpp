#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int mini=a[0];
    for (int i = 1; i < n; ++i)
    {
       
        mini=min(a[i],mini);
         int x=mini;
         int y=a[i]-x;
        if(a[i]<a[i-1]){
            continue;
        }
       else if(x!=y and x+y==a[i] and x<=mini and y<=mini){
             continue;
        }
        else{
            cout<<"NO\n";
            return;
        }
        
    }cout<<"YES\n";
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