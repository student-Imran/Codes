#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    string s;cin>>s;
    int d=s.size();
    sort(s.rbegin(),s.rend());
    for (int i = 0; i <d-2; ++i)
    {
        if(s[i]=='F' and s[i+1]=='F' and s[i+2]=='T')
        {
            swap(s[i+2],s[i+1]);
        }
        else if(s[i]=='N' and s[i+1]=='T' and s[i+2]=='T')
        {
            swap(s[i],s[i+1]);
        }
    }cout<<s<<'\n';
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