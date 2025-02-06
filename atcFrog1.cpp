#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll
int ans=0;
int dp[100000+10];
int frog1(int w[],int x,int i)
{
   
   int cost=INT_MAX
   if(i==x-1)
   {
   	return 0;
   }
   if(dp[i]!=-1)
   {
   	return dp[i];
   }
   else
   {
   	 cost=min(cost,frog1(w,x,i+1)+abs(w[i+1]-w[i]));
   	 if(i<x-2)
   	 cost=min(cost,frog1(w,x,i+2)+abs(w[i+2]-w[i]));
   	 return dp[i]=cost;
   }
  
}  


void solve()
{
   memset(dp,-1,sizeof(dp));
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   cout<<frog1(a,n,0)<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/{
		solve();
	}
	return 0;

}

