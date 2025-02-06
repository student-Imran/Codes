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
   ll n,x;
   cin>>n>>x;
   ll a[n];
   ll s=0;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	s+=a[i];
   }
   ll ma=*max_element(a,a+n);
   ll di=(s/x);
   if(ma>di)
   {
   	cout<<di+(ma-di)<<endl;
   }
   else
   {
   	cout<<ceil((double)s/(double)x)<<endl;
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

