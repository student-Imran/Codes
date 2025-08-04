#include<bits/stdc++.h>
using namespace std; 
void solve()
{
  int n;cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  for (int i = 0; i < n-1; ++i)
  {
    if (abs(a[i]-a[i+1])<=1)
    {
      cout<<0<<'\n';
      return;
    }
  }
  for (int i = 0; i < n-2; ++i)
  {
    int maxi=max(a[i+1],a[i+2]);
    int mini=min(a[i+1],a[i+2]);
    if (mini<=a[i] and maxi>=a[i])
    {
    cout<<1<<'\n';
    return;
    }
  }
  for (int i = n-1; i>=2; --i)
  {
    int maxi=max(a[i-1],a[i-2]);
    int mini=min(a[i-1],a[i-2]);
    if (mini<=a[i] and maxi>=a[i])
    {
       cout<<1<<'\n';
       return;
    }
  }
  cout<<-1<<'\n';
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

