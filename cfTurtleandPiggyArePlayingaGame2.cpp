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

   
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   int ans;
    ans=max(a[0],a[1]);
   int i; 
  
   for(i=2;i<n;i++)
   {
   	if(i%2==0)
   	{
   		ans=min(ans,a[i]);
   		//a[i+1]=ans;
   	}
   	else
   	{
   		ans=max(ans,a[i]);
   		//a[i+1]=ans;
   	}
   }
   cout<<ans<<endl;
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

