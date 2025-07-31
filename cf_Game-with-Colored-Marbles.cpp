#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve() {
  
  int n;cin>>n;
  int a[n];
  std::map<int, int> m;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    m[a[i]]++;

  }
  int cnt=0,cnt1=0;
  for (auto x: m)
  {
     if (x.second==1)
     {
       cnt++;
     }
     else{
      cnt1++;
     }
  }
  int ans=0;
  ans+=(cnt+1)/2;
  ans*=2;
  // cout<<ans<<'\n';
  cout<<ans+cnt1<<'\n';

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1; 
  cin >> tt; 
  while (tt--) {
    solve();
  }
}