#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
  ll n;cin>>n;
  ll a[n],b[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  if (!is_sorted(a,a+n))
  {
    reverse(a,a+n);
  }
  if (!is_sorted(a,a+n))
  {
    cout<<"No\n";
    return;
  }
  ll gc1=a[0];
  for (int i = 1; i < n; ++i)
  {
    gc1=__gcd(gc1,a[i]);
  }
  int ok=0;
  if (gc1==a[0])
  {
    
    for (int i = 1; i <=n; ++i)
    {
      if (gc1*i!=a[i-1])
      {
        ok=1;
        break;
      }
    }
    if (ok==0)
    {
      cout<<"YES\n";
      return;
    }
   
  }
  
  for (int i = 0; i < n; ++i)
  {
    b[i]=a[i];
    a[i]-=i+1;
    b[i]-=n-i;
  }
    ok=0;
    int x=a[0];
    for (int i = 1; i <=n; ++i)
    {
      if (x*i!=a[i-1])
      {
        ok=1;
        break;
      }
    }
    if (ok==0)
    {
      cout<<"YES\n";
      return;
    }

    x=b[0];
    ok=0;
    for (int i = 1; i <=n; ++i)
    {
      if (x*i!=b[i-1])
      {
        ok=1;
        break;
      }
    }
    if (ok==0)
    {
       cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
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

