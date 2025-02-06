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
   ll n;
   cin>>n;
   ll a[n],b[n];
   vector<pair<ll,ll>>v;
   int j=0;
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];

   	v.pb(make_pair(a[i],i+1));
   }
   sort(v.rbegin(),v.rend());
    ll prefixSum[n];
    prefixSum[0] = v[0].first;
    //cout<<v[0].first<<endl;
  
    for (int i = 1; i < n; i++)
{prefixSum[i] = prefixSum[i - 1] + v[i].first;

}
/*for(int i=0;i<n;i++)
{
	cout<<prefixSum[i]<<" ";
}
*/
int o=1;
for(int i=1;i<n;i++)
{
	while(1)
		{
		ll k=prefixSum[n-1]-prefixSum[i-o];
		
		if(k>=v[i-1])
		{
			c++;
			o++;


		}
		else
		{
         c+(n-(i+1));
		}
	}
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

