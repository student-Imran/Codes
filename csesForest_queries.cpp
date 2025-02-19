#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int b[1000+10][1000+10];
void solve()
{
   int n,q;
   cin>>n>>q;
   char a[n+1][n+1];
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   		cin>>a[i][j];
   		//cout<<a[i][j]<<' ';
   	   if(a[i][j]=='.')
   		{
          b[i][j]=0;
   		}
   		else
   		{
   			b[i][j]=1;
   		}
   	}
   }
   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   		
   b[i][j]=b[i-1][j]+b[i][j]+b[i][j-1]-b[i-1][j-1];
    
   	}
   
   }
   while(q--)
   {
   	int y1,x1,y2,x2;
   	cin>>x1>>y1>>x2>>y2;
   	cout<<b[x2][y2]-b[x2][y1-1]-b[x1-1][y2]+b[x1-1][y1-1]<<'\n';
   }




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

