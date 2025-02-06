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
   ll ans=-1LL,ans1=-1LL,ma,mi;
   ll m=-1LL,mini=-1LL;
   ll fin=-1LL;
   for(ll i=0;i<n;i++)
   {
   	cin>>a[i];
   	if(i>0)
   	{
   		ma=(a[i])*(a[i-1]);
   		if(ma>m)
   		{
   			m=ma;
   		}
   		
   	}
   }
   //cout<<ans<<endl<<ans1<<endl;
   cout<<m<<endl;
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

