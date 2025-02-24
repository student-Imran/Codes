#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
void solve()
{
  ll n,k;cin>>n>>k;
  ll a[n];
  ll s=0;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  	s+=a[i];
  }   
  sort(a,a+n);
  ll maxi_sum=0;
  ll mini_sum=0;
  /*for(auto x:a)
  {
  	cout<<x<<" ";
  }cout<<'\n';*/
  for(int i=0;i<2*k;i++)
  {
  	mini_sum+=a[i];
  }
  int r=n-1;
  int k1=k;
  while(k--)
  {
  	maxi_sum+=a[r];
  	r--;
  }
  ll ans=s-min(mini_sum,maxi_sum);
 // cout<<mini_sum<<" "<<maxi_sum<<'\n';
  //cout<<s<<'\n';
  int ri=n-1;
  
  for(int i=0;i<n;i++)
  {
     ll mini=0;
     ll maxi=0;
     if(i+1<n)
     {
       mini=a[i]+a[i+1];
     }
     maxi=a[ri];
     //cout<<mini<<" "<<maxi<<'\n';
     if(mini==0)
     {
     	s-=maxi;
     	i=i-1;
     	ri--;

     }
     else if(mini<maxi)
     {
     	s-=mini;
     	i=i+1;
     }
     else
     {
     	s-=maxi;
     	i=i-1;
     	ri--;
     }
     k1--;
     if(k1==0)
     {
     	break;
     }
     //cout<<"sum "<<s<<'\n';

  }
  //cout<<s<<'\n';
  cout<<max(ans,s)<<'\n';
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

