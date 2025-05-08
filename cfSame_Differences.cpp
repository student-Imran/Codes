#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n;cin>>n;
   int a[n+1];
   map<int,int>m;
   for(int i=1;i<=n;i++){
       int x;cin>>x;
       x-=i;
       m[x]++;
   }long long int ans=0;
   for(auto x: m){
   	ans+=((x.second)*1LL*(x.second-1))/2;
   }cout<<ans<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

