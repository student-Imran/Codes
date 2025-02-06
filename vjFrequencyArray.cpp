#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

const int N=1e5 +10;
int hsh[N];
void solve()
{
   int n,m;
   cin>>n>>m;
   int a[n]; 
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	hsh[a[i]]++;
   }
   for(int i=1;i<=m;i++)
   {
   	cout<<hsh[i]<<endl;
   }

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{
		solve();
	}*/
	solve();
	return 0;

}

