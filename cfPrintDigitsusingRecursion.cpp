#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 

void digit(ll x)
{
	if(x==0LL)
	{
	    return;
	}
     digit(x/10LL);
		cout<<x%10LL<<" ";
	
}

void solve()
{
   ll n;
   cin>>n;
   if(n==0)
   {
   	cout<<0;
   }
   else
   	{digit(n);}
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

