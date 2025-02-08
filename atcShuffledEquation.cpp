#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
const int N=1000;
int fre[N+1];
void solve()
{
	int m,n;cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		fre[a[i]]++;
	}
	
	int x=n-m;
	if(x!=0)
	{
		cout<<n-m<<'\n';
	for(int i=1;i<=n;i++)
	{
      if(fre[i]==0)
      {
      	cout<<i<<" ";
      }

	}cout<<'\n';
}
else
{
	cout<<0<<'\n';
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

