#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll x,y;
  cin>>x>>y;
  ll l_cm=(x*y)/__gcd(x,y);
  if(l_cm!=x and l_cm!=y)
  {
  	cout<<l_cm<<'\n';
  }
  else
  {
  	cout<<y*(y/x)<<'\n';
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

