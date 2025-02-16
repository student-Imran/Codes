#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(), (v).end()
#define set_bits __builtin_popcountll  

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> m;
    int left = 0, ans = 0;

    for (int right = 0; right < n; right++) {
        m[a[right]]++;

 
        while (m[a[right]] > 1) {
            m[a[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
