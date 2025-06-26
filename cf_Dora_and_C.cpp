#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,a,b;cin>>n>>a>>b;
   int ar[n];
   int gc=__gcd(a,b);
   for(int i=0;i<n;i++){
    cin>>ar[i];
    ar[i]=ar[i]%gc;
   }
   sort(ar,ar+n);
   int ans=ar[n-1]-ar[0];
   for(int i=1;i<n;i++){
        ans=min(ans,ar[i-1]+gc-ar[i]);
    }cout<<ans<<'\n';

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

