#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;cin>>n;
  int a[n-1];
  for(int i=0;i<n-1;i++){
  	cin>>a[i];
  } 
  int c=0,i; 
  cout<<a[0]<<" "; 
  for(i=0;i<n-2;i++){
  	c=min(a[i],a[i+1]);
  	cout<<c<<' ';
  	
  }
  cout<<a[n-2]<<'\n';
 

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

