#include<bits/stdc++.h>
using namespace std; 
 #define ll long long int
void solve()
{
   ll n;cin>>n;
   std::vector<ll> a(n);
   for (int i = 0; i < n; ++i)
   {
     cin>>a[i];
   }
  ll result = accumulate(a.begin(), a.end(), 1, lcm<int, int>);
  // cout<<result<<'\n';
  int cnt=count(a.begin(),a.end(),result);
  if (cnt==n and n<result)
  {
    for (int i = 0; i < n; ++i)
    {
      cout<<1<<" ";
    }cout<<'\n';
    return;
  }
    int sum=0;
    for (int i = 0; i < n; ++i)
    {
       sum+=result/a[i];
    }
    if (sum<result)
    {
      for (int i = 0; i < n; ++i)
      {
        cout<<result/a[i]<<" ";
      }cout<<'\n';
    }
    else{
      cout<<-1<<'\n';
    }
  
  
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

