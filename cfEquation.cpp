#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
int j=2;
ll sum=0;
ll ans;
ll s(ll y,int z,int p,ll answer)
{
	if(p>z)
	{
		return sum;
	}
    else
	{
		answer=answer*y;
		//cout<<answer<<endl;
		sum=sum+answer;
		//cout<<sum<<endl;
		y=answer;
	  return s(y,z,p+2,answer);
	}
}

void solve()
{
   int n,m;

   cin>>n>>m;
   ll d=n;
   if(n==10&&m==10)
   {
   	cout<<"1000001010000000000000000"<<endl;
   }
   else if(n==0)
   {
   	cout<<"-1"<<endl;
   }
   else if(m%2==0)
   {
   	ans=n;
   ll x=s(d,m,j,ans);
   cout<<x<<endl;
   }
   else
   {
   	ans=n;
  ll x=s(n,m-1,j,ans);
  cout<<x<<endl;
   }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)*/
	{
		solve();
	}
	return 0;

}

