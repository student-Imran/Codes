#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll
int dp[10000][10000];
int lis(int b[],int n1)
{
  if(n1<1)
  {
  	return 0;
  }
  if(dp[n1][n1]!=-1)
  {
  	return dp[n1][n1];
  }
  else
  {
  	if(b[n1-1]>=b[n1-2])
  	{
      return dp[n1][n1]=1+lis(b,n1-1);
  	}
  	else
  	{
  		return dp[n1][n1]=lis(b,n1-1);
  	}
  }
  return dp[n1][n1];
}  
void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   memset(dp,-1,sizeof(dp));
   cout<<lis(a,n)<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/
	{
		solve();
	}
	return 0;

}

