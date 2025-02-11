#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   int n,m;
   cin>>n>>m;
   vector<ll> v[n];
   multimap<ll,ll>ma;
   ll sum[n];
   ll l=-1;
   for(int i=0;i<n;i++)
   {
   	ll k=0;
   	for(int  j=0;j<m;j++)
   	{
   		int x;
   		cin>>x;
   		v[i].pb(x);
   		k+=x;
   	}
     
   	 ma.insert({-k, 1LL * i});
   	
   }
   ll ans=0;
  ll ans1=0;
   for(auto x:ma)
   {
   	int ind=x.second;
      for(int i=0;i<m;i++)
      {
      	
      	if(i==0)
      	{ans+=v[ind][i];}
      else
      {
      	ans+=v[ind][i];
      	ans+=v[ind][i-1];
      }

      	
      }
      
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

