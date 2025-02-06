#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
int t[1010][1010];
void max_profit(int b[1010],int d[1010],int r)
{
	for(int i=0;i<r+1;i++)
	{
		for(int j=0;j<r+1;j++) 
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
	}
	int i,j;
	for( i=1;i<r+1;i++)
	{
		for( j=1;j<r+1;j++)
		{
			if(d[i-1]<=j)
				{
t[i][j]=max(b[i-1]+t[i][j-d[i-1]],t[i-1][j]);
		}
		else
		{
			t[i][j]=t[i-1][j];
		}

	}

	}
	cout<<t[i-1][j-1]<<endl;
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
   int c[n];
   for(int i=0;i<n;i++)
   {
   	c[i]=i+1;
   }
   max_profit(a,c,n);
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

