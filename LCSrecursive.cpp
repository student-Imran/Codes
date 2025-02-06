#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
int dp[10000][10000];
void LCS(string x,string y,int n,int m)
{
	if(n==0||m==0)
	{
		return 0;
	}
	else
	{
		if(dp[n][m]!=-1)
		{
			return dp[n][m];
		}
		else if(x[n-1]==y[m-1])
		{
			 
           return dp[n][m]=1+LCS(x,y,n-1,m-1);
		}
		else
		{
           return dp[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
		}
	}
	cout<<
}


void solve()
{
   string s1,s2;
   cin>>s1>>s2;
   memset(dp,-1,sizeof(dp));
   int n1=s1.length();
   int m1=s2.length();
   int x=LCS(s1,s2,n1,m1);
   //cout<<x<<endl;
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

