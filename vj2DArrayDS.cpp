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
   
   int a[6][6];
   for(int i=0;i<6;i++)
   {
   	for(int j=0;j<6;j++)
   	{
   		cin>>a[i][j];
   	}
   }
   int ans=-1000,s=0;
   for(int i=1;i<=4;i++)
   {
   	for(int j=1;j<=4;j++)
   	{
   		s=a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
   		ans=max(s,ans);
   	}
   }
   cout<<ans<<endl;
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

