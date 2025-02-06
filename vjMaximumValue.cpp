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
   multiset<ll>s;
   for(int i=0;i<n;i++)
   {
   	ll x;
   	cin>>x;
   	s.insert(x);
   }
   auto it=s.end();
   auto ti=(--it);
   //auto tt=--ti;
   //cout<<(*it)<<" "<<(*ti)<<endl;
   cout<<(*(--it))<<endl<<(*(--ti))<<endl;
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

