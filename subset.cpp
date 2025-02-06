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
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
   	ll x;
   	cin>>x;
    v.pb(x);
   }
   vector<vector<ll>>subsets;
   ll c=0;
   
  ll mask =0;
  ll t=(1<<n);
  for(mask=0;mask<t;mask++)
  {
  	vector<ll>sub;
  	for (int i = 0; i < n; i++)
  	{
  		if((mask&(1<<i))!=0)
  		{
  			sub.pb(v[i]);
         c++;
  			//s+=a[i];
  		}
  	}
  	subsets.pb(sub);

  }
  for(auto s:subsets)
  {
   for(auto ele:s)
   {
      cout<<ele<<" ";
   }
   cout<<endl;
  }
  
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{*/
		solve();
	//}
	return 0;

}

