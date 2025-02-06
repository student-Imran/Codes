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
   ll a[n][m];
   for(int i=0;i<n;i++)
   {
   	for(int j=m-1;j>=0;j--)
   	{
   		cin>>a[i][j];
   	}
   }
   int j;
   for(int i=0;i<n;i++)
   {
   	for(j=0;j<m-1;j++)
   	{
   		cout<<a[i][j]<<" ";
   	}
   	cout<<a[i][j]<<endl;
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

