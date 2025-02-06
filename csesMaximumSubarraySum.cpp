
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
   ll l;
   ll ma=v[0],s=0;
   for (l=0;l<n;l++)
   {
   	s+=v[l];
   	ma=max(ma,s);
   	if(s<0)
   	{
   		s=0;
   	}
   }
   cout<<ma<<endl;
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

