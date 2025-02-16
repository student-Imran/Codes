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
   int ok=0;
   for(ll i=1;(i*i*i)<=n;i++)
   {
   	ll x=n-(i*i*i);
   	if(x!=0)
   	{ll x1=cbrt(x);
   	if(x1*x1*x1==x and (i*i*i)+(x1*x1*x1)==n)
   	{
   		ok=1;
   		break;
   	}}
   }
   if(ok==0)
   {
   	cout<<"NO\n";
   }
   else
   {
   	cout<<"YES\n";
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

