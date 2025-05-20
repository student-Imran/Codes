#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;cin>>n;
  vector<int>v;
  int mini=1e9+10;
  for(int i=0;i<n;i++){
  	int x;cin>>x;
  	int a[x];
  	for(int j=0;j<x;j++){
  		cin>>a[j];
  	}
  	sort(a,a+x);
  	mini=min(mini,a[0]);
  	v.push_back(a[1]);
  }
  long long int ans=0;
  sort(v.begin(),v.end());
  ans=accumulate(v.begin(),v.end(),0LL);
  cout<<ans+mini-v[0]<<'\n';

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

