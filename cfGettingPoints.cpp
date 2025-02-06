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
   ll n,p,l,t,ans,c;
   cin>>n>>p>>l>>t;
    if(n%7LL==0)
   {
   	c=n/7LL;
   	if(c%2==0)
   	{
   		ans=c/2;
   	}
   	else
   	{
   		ans=(c/2)+1;
   	}
   	
   }
   else
   {
   	c=(n/7LL)+1LL;
   	if(c%2==0)
   	{
   		ans=c/2;
   	}
   	else
   	{
   		ans=(c/2)+1;
   	}
   }
  l; //cout<<ans<<end
   ll i,c2=0,x=0,c1=0;

   for( i=1;i<=ans;i++)
   {
   	c1+=(2*t)+l;
   	x=p-c1;
   	if(x<=0)
   	{
      c2=1;
      break;
   	}
   }
   //cout<<c1<<" "<<x<<endl;
   if(c2==0)
   {
      if(x%l==0)
      {
      	cout<<n-((i-1)+(x/l))<<endl;
      }
      else
      {
      	cout<<n-((i-1)+(x/l)+1LL)<<endl;
      }
   }
   else
   {
   	cout<<n-i<<endl;
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

