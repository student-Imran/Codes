#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
void base(ll x)
{
	if(x==0)
	{
		return;
	}
	else
	{
      base(x/2);
      cout<<x%2;
	}
}

void solve()
{
   ll n;
   cin>>n;
   base(n);
   cout<<endl;
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

