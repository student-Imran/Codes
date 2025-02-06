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
   ll a[n];
   ll s=0LL;
   for(int i=0;i<n-2LL;i++)
   {
   	cin>>a[i];
   	s+=a[i];
   }
   ll x,y;
   cin>>x>>y;
   cout<<y-(x-s)<<endl;
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

