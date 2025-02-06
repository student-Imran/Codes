#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 
void fun(ll b[],ll p,ll m)
{
	if(p>=m)
	{
		return;
	}
	//cout<<b[p]<<" ";
	fun(b,p+2,m);
	cout<<b[p]<<" ";
}


void solve()
{
  ll n;
  //ll x=0;
  cin>>n;
  ll a[n];

  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  if(n&1)
  {fun(a,0,n);}
else
{
	fun(a,0,n-1);
}
cout<<endl;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/
	{
		solve();
	}
	return 0;

}

