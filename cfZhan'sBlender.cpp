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
   ll n,x,y;
   cin>>n>>x>>y;
   ll a=min(x,y);
   ll b=n/a;
   if(n%a==0)
   {
   	cout<<b<<endl;
   }
   else
   	{cout<<b+1LL<<endl;}
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

