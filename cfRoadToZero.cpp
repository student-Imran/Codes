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
   ll x,y;
   cin>>x>>y;
   ll a,b;
   cin>>a>>b;
   if(x==0LL&&y==0)
   {
   	cout<<"0"<<endl;
   }
   else if (x==y)
   {
   	if(a*2LL<b)
   	{
   		cout<<x*(a*2LL)<<endl;
   	}
   	else
   	{
   		cout<<x*b<<endl;
   	}
   }
   else
   {
   	ll c=abs(x-y);
   	ll k=min(x,y);
   	ll x1=c*a;
   	if(a*2LL<b)
   	{
   		cout<<x1+k*(a*2LL)<<endl;
   	}
   	else
   	{
   		cout<<x1+k*b<<endl;
   	}

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

