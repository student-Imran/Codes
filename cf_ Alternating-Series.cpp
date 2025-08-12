#include<bits/stdc++.h>
using namespace std; 

void solve()
{
  int n;cin>>n;
  int a[n], b[n];
  for (int i = 0; i < n; ++i)
  {
  	cin>>a[i];
  }
   for (int i = 0; i < n; ++i)
  {
  	cin>>b[i];
  }
  int ans=0;
  for (int i = 0; i < n; ++i)
  {
  	if (a[i]>b[i])
  	{
  		ans+=a[i]-b[i];
  	}
  }cout<<ans+1<<'\n';
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

