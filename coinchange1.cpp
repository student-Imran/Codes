//Number of ways


#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

void coin_ways(int r,int r1,int c[])
{
	long long int t[r1+1][r+1];
	for(int i=0;i<r1+1;i++)
	{
		for(int j=0;j<r+1;j++) 
		{
			if(i==0&&j>0)
			{
				t[i][j]=0;
			}
			if(j==0)
			{
				t[i][j]=1;
			}
		}
	}
	int i,j;
	for( i=1;i<r1+1;i++)
	{
		for(j=1;j<r+1;j++) 
		{
			if(c[i-1]<=j)
			{
		t[i][j]=t[i][j-c[i-1]]+t[i-1][j];
			}
			else
			{
		t[i][j]=t[i-1][j];
			}
		}
	}
	cout<<t[r1][r]<<endl;
}

void solve()
{
   int n,m;
   cin>>n>>m;
   int a[m];
   for(int i=0;i<m;i++)
   {
   	cin>>a[i];
   }
   coin_ways(n,m,a);

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

