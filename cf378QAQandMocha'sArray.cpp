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
   //ll a[n];
   vector<ll>v;
   int an=0;
   for(ll i=0;i<n;i++)
   {
   	ll x;
   	cin>>x;
   
   	v.pb(x);
   	
   	
   }
   
  sort(all(v));	
   //v.erase(unique(all(v)),v.end());
   /*for(int i=0;i<v.size();i++)
   {
   	cout<<v[i]<<" ";
   }cout<<endl;*/
   //cout<<m<<" "<<m1<<endl;
   
   	//int c=0;
   	int l=0;
   	ll j; 
   for( j=0;j<n;j++)
   {
   	if((v[j]%v[0]==0))
   	{
   		continue;
   	}
   	else
   	{
   		l++;;
   		break;
   	}
   }
   if(l==0)
   {
   	cout<<"YES"<<endl;
   }
   else
   	{
   		int c=0;
   		ll p=v[j];
   		//cout<<p<<endl;
   for(ll k=j;k<n;k++)
   {
   	if((v[k]%p==0)||(v[k]%v[0]==0))
   	{
   		continue;
   	}
   	else
   	{
   		c++;
   	}
   }
   if(c==0)
   {
   	cout<<"YES"<<endl;
   }
   else
   {
   	cout<<"NO"<<endl;
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

