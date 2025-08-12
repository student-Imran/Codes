#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n;cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
   {
     cin>>v[i];
   }
   sort(v.begin(),v.end());
   ll ans=0;
   for (int i = 0; i < n; ++i)
   {

      for (int j = i+1; j < n; ++j)
      {
      int x=v[i]+v[j];
      int y = v[n-1] - x;
      int lb = lower_bound(v.begin(), v.end(), x) - v.begin();
      int ub = upper_bound(v.begin(), v.end(), y) - v.begin();
      ub = max(ub, j+1);
      int cnt = lb - ub;
      cnt = max(0, cnt);
      ans += cnt;
      
 }
}
   cout<<ans<<'\n';
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

