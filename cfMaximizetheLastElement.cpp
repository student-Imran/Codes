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
   int n;
   cin>>n;
   int a[n];
   int ans=0;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	if(i%2==0)
   	{
   		ans=max(ans,a[i]);
   	}
   }cout<<ans<<endl;
   
  
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

