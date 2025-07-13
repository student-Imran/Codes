#include<bits/stdc++.h>
using namespace std;  
void solve()
{
  int n,x;cin>>n>>x;
  for(int i=0;i<x;i++){
	cout<<1;
  }
  int l=n-x;
  for(int j=0;j<l;j++){
	cout<<0;
  }cout<<'\n';
 
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

