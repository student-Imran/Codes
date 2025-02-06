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
	int n;
	cin>>n;
	map<pair<int,int>,string>m;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		m[{x,y}]=s;
	}
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		/* code */
		int a,b;
		cin>>a>>b;
		cout<<m[{a,b}]<<endl;
	}
   
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

