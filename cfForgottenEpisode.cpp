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
   ll x=0,s=0,a[n-1];
    x=(n*(n+1))/2LL;
   for(int i=0;i<n-1;i++)
   {
   	cin>>a[i];
   	s+=a[i];
   }
   cout<<x-s<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{*/
		solve();
	//}
	return 0;

}

