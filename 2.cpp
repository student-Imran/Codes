#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int spf[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    if (spf[i] == i) {
      for (int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int ans = 0;
    while (n > 1) {
      int p = spf[n], e = 0;
      while (n % p == 0) {
        e++;
        n /= p;
      }
      ans = max(ans, e);
    }
    cout << ans << '\n';
  }
  return 0;
}