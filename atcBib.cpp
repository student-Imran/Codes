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
   int a[n],b[n];
   map<int,int>ma;
   for(int i=0;i<n;i++)cin>>a[i];
   	for(int i=0;i<n;i++)
   		{
   			cin>>b[i];
   			ma[b[i]]=a[i];
   		}
   		/*for(auto x1:ma)
   		{
   			cout<<x1.first<<" "<<x1.second<<'\n';
   		}*/
   		for(auto x:ma)
   		{
   			//cout<<x.second<<" ";
   			cout<<b[x.second-1]<<" ";
   		}cout<<'\n';

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

