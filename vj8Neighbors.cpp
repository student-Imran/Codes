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
   int n,m;
   cin>>n>>m;
   char a[n][m];
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>a[i][j];
   	}
   }
   int x,y;

   cin>>x>>y;
   x--;
   y--;
   if((a[x][y-1]=='.')||(a[x][y+1]=='.')||(a[x-1][y-1]=='.')||(a[x-1][y]=='.')||(a[x-1][y+1]=='.')||(a[x+1][y-1]=='.')||(a[x+1][y]=='.')||(a[x+1][y+1]=='.'))
     {
     	cout<<"no"<<endl;
     }
     else
     {
     	cout<<"yes"<<endl;
     }
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

