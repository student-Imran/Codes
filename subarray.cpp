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
   ll l,r,i;
   for (l=0;l<n;l++)
   {
   	for(r=l;r<n;r++)
   	{
   		for(i=l;i<=r;i++)
   		{
   			cout<<v[i]<<" ";
   		}
   		cout<<endl;
   	}
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

