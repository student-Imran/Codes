#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,x,k;cin>>n>>x>>k;
   string s;cin>>s;
   int i;
   int ok=0;
   for(i=0;i<n;i++)
   {
    if(s[i]=='L')
    {
        x--;
        k--;
    }
    else if(s[i]=='R')
    {
        x++;
        k--;
    }
    if(x==0)
    {
        ok=1;
        break;
    }
   }
   //cout<<x<<' '<<ok<<'\n';
   if(ok==0)
   {
    cout<<0<<'\n';
   }
   else
   {
    ll j;
    ll l=0,r=0;
    for(j=0;j<n;j++)
    {
     if(s[j]=='L')
    {
        l++;
    }
    else if(s[j]=='R')
    {
      r++;
    }
    if(l==r)
    {
      break;
    }
    }
    //cout<<l<<" "<<r<<'\n';
    if(l==r)
    {
        cout<<1LL+(k/(j+1LL))<<'\n';
    }
    else
    {
        cout<<1<<'\n';
    }
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

