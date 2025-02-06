#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 
int dp[1000][1000];
// Max profit 
int knapsack(int *wt,int *val,int w,int n)
{
	if(n==0||w==0)
	{
		return 0;
	}
	else if(wt[n-1]<=w)
	{
		return dp[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
	}
	else
	{
		return dp[n][w]=knapsack(wt,val,w,n-1);
	}
}

void solve()
{
   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   {
   	/* code */
   	cin>>a[i];
   }
   int v[n];
   for (int i = 0; i < n; ++i)
   {
   	/* code */
   	cin>>v[i];
   }
   int w;
   cin>>w;

   cout<<knapsack(a,v,w,n)<<endl;

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

