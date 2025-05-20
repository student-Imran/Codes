#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<long long, int>> a(n); 
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    if(n == 1) {
        cout << "0\n";
        return;
    }

    sort(a.begin(), a.end()); 

    vector<pair<int, long long>> operations; 

    for(int i = 1; i < n; i++) {
        if(a[i].first % a[i-1].first != 0) {
            long long add = a[i-1].first - (a[i].first % a[i-1].first);
            operations.push_back({a[i].second, add});
            a[i].first += add; 
        }
    }

    cout << operations.size() << "\n";
    for(auto &op : operations) {
        cout << op.first << " " << op.second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
    return 0;
}