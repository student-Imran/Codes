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
   ll y;
   y=set_bits(n);
   for(ll i=0;i<=1000000;i++)
   {
   	ll x;
   	x=set_bits(i);
   	if(x==y)
   	{
   		cout<<i<<endl;
   		break;
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

