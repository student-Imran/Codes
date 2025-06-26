#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   	sort(a,a+n);
   long long x=a[0];
   for(int i=0;i<n;i++){
   	x=(x+a[i])/2;
   }cout<<x<<'\n';
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
